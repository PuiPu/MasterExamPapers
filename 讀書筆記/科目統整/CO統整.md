```dataviewjs
const targetTag = "#subject/CO";
const folder = "Daily Notes";

const pages = dv.pages(`"${folder}"`)
    .sort(page => page.file.name, "desc");

for (const page of pages) {
    const file = app.vault.getAbstractFileByPath(page.file.path);
    if (!file) continue;

    const content = await app.vault.read(file);
    const lines = content.split("\n");

    let collecting = false;
    let section = [];
    let headingLevel = 0;

    for (const line of lines) {
        const heading = line.match(/^(#{1,6})\s+(.*)$/);

        if (heading) {
            const currentLevel = heading[1].length;
            const headingText = heading[2];

            if (headingText.includes(targetTag)) {
                collecting = true;
                headingLevel = currentLevel;

                section.push(
                    headingText.replace(targetTag, "").trim()
                );

                continue;
            }

            if (collecting && currentLevel <= headingLevel) {
                break;
            }
        }

        if (collecting) {
            section.push(line);
        }
    }

    if (section.length > 0) {
        dv.header(2, page.file.name);
        dv.paragraph(`來源：[[${page.file.path}|${page.file.name}]]`);
        dv.paragraph(section.join("\n"));
        dv.el("hr", "");
    }
}
```
