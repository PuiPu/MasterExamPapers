# 🎯 考研 Dashboard

> [!important] 今天怎麼使用
> 🔴 RED → 補觀念 + 基礎題  
> 🟡 YELLOW → 不重讀，直接刷題  
> 🟢 GREEN → 偶爾用題目驗證  
> ⚫ MASTERED → 不主動複習

## 📚 科目 Backbone
- [[CO|計算機組織]]
- [[OS|作業系統]]
- [[DS|資料結構]]
- [[AM|演算法]]
- [[DM|離散數學]]
- [[LA|線性代數]]

## 📊 各科狀態
```dataview
TABLE
  length(filter(rows, (r) => r.status = "red")) AS "🔴",
  length(filter(rows, (r) => r.status = "yellow")) AS "🟡",
  length(filter(rows, (r) => r.status = "green")) AS "🟢",
  length(filter(rows, (r) => r.status = "mastered")) AS "⚫"
FROM "03 Cards"
WHERE type = "card"
GROUP BY subject
SORT subject ASC
```

## 🔴 不會｜優先補洞
```dataview
TABLE WITHOUT ID file.link AS "考點", subject AS "科目", chapter AS "章節"
FROM "03 Cards"
WHERE type = "card" AND status = "red"
SORT subject ASC, chapter ASC
```

## 🟡 不穩｜今天刷題
```dataview
TABLE WITHOUT ID file.link AS "考點", subject AS "科目", chapter AS "章節"
FROM "03 Cards"
WHERE type = "card" AND status = "yellow"
SORT subject ASC, chapter ASC
```

## 🟢 已會
```dataview
TABLE WITHOUT ID file.link AS "考點", subject AS "科目", chapter AS "章節"
FROM "03 Cards"
WHERE type = "card" AND status = "green"
SORT subject ASC, chapter ASC
```

## ⚫ Mastered
```dataview
TABLE WITHOUT ID file.link AS "考點", subject AS "科目", chapter AS "章節"
FROM "03 Cards"
WHERE type = "card" AND status = "mastered"
SORT subject ASC, chapter ASC
```
