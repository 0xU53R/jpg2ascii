# 🖼️ JPG to ASCII Converter (C)

A simple C program that converts a grayscale image into ASCII art using pixel intensity mapping. It uses the **stb_image** header-only library to load images and prints ASCII output directly to the terminal.

---

## 📌 Features

* Converts images (`.jpg`, `.png`, etc.) into ASCII art
* Adjustable output width for scaling
* Maintains aspect ratio using vertical scaling
* Lightweight and fast (pure C)

---

## 🧠 How It Works

1. Loads an image using `stb_image`
2. Converts it to grayscale (1 channel)
3. Iterates through pixels with a step size (downsampling)
4. Maps pixel brightness (0–255) to ASCII characters:

   ```
    .:-=+*#%@
   ```
5. Prints ASCII characters to the terminal

---

## ⚙️ Requirements

* C compiler (e.g., `gcc`)
* `stb_image.h` (included in project directory)

Download `stb_image.h` from:
https://github.com/nothings/stb

---

## 🛠️ Compilation

```bash
gcc main.c -o ascii
```

---

## ▶️ Usage

1. Place your image in the same directory as the program

2. Rename it to:

   ```
   image.jpg
   ```

   *(or modify the filename in the code)*

3. Run the program:

```bash
./ascii
```

---

## 🎛️ Customization

### Change Output Width

```c
int new_width = 150;
```

* Lower value → smaller output
* Higher value → more detailed but larger output

### Adjust Aspect Ratio

```c
int step_y = step_x * 2;
```

* Increase multiplier if output looks stretched vertically
* Decrease if squished

### Change ASCII Characters

```c
const char *ascii = " .:-=+*#%@";
```

* Add more characters for smoother gradients
* Fewer characters = more contrast

---

## ⚠️ Notes

* Image is converted to grayscale automatically (`channels = 1`)
* Very large images may still produce large output
* Terminal font affects final appearance

---

## 📂 Example Output

```
@@@@@@@%%%%##**++==
%%%%###**++==--::..
###**++==--::..    
```

---

## 📜 License

This project uses `stb_image`, which is public domain / MIT licensed.

---

## 👨‍💻 Author

0xU53R

---