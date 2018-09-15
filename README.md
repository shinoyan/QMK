# QMK

keymap for my custom mechanical keyboard using the QMK firmware

## 使い方

こんな感じで、エイリアスを作成
```
cd ~/Documents/qmk_firmware/keyboards/fourier/keymaps/
ln -s ~/src/QMK/fourier_shinoyan ./shinoyan
```

## ビルド
通常のQMKビルドと変わらず

```
make fourier/rev1:shinoyan
```
