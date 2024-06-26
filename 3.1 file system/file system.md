# ファイルシステム

## ファイル

一般に、「ファイル」という用語は以下の3種類で用いられています。

1. 広義のファイル
2. 狭義のファイル
3. ストリーム

ファイルは以下の特徴があります。

- **何らかのデータを保持する**
  - 画像、テキストetc...
- **付属情報が存在する**
  - 更新日時、権限など
- **名前(パス)で指定できる**
  - これが最も重要な特徴かもしれません

## 広義のファイル

広義のファイルとは、`ls`コマンドで表示される結果すべてを指します。

```sh
$ ls

1.1 hello/       1.7 man/         3.1 file system/ README.md
1.5 args/        2.1 OS/          LICENSE
```

広義のファイルに内包される「狭義のファイル」として、以下の種類があります。

## 狭義のファイル

### 普通のファイル

ここでいう普通のファイルとは、「**内容がそのまま記録されているファイル**」のことです。

拡張子がついているファイル、と理解すればOKです。

- jpeg
- txt
- etc...

### ディレクトリ

ディレクトリとは、「**ファイルを複数入れることができるファイル**」のことです。

### シンボリックリンク

シンボリックリンクとは、「**他のファイルの名前を格納したファイル**」のことです。

シンボリックリンクの主な用途は、「ファイルやディレクトリに別名をつけること」です。

シンボリックリンクにアクセスすると、カーネルはシンボリックリンクが指すファイルへと自動的に置き換えます。

### デバイスファイル

デバイスファイルとは、「デバイス（ハードウェア）をファイルとして表現したファイル」のことです。

たとえばSSDやHDDなどがデバイスファイルにあたります。

`/dev/null`もデバイスファイルです。

### その他

その他、以下のファイルも広義のファイルにあたります。

- 名前付きパイプ(named pipe)
- UNIXドメインソケット(UNIX domain socket)

### 付属情報

ファイルには、データ本体の他に以下の情報が付属しています。

- ファイルの種類（普通のファイル、ディレクトリetc...）
- パーミッション
- サイズ
- 更新日時
