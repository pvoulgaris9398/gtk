# GTK Widget Toolkit Sample

## `Saturday, 6/14/25`

- Working through the [Getting Started](https://docs.gtk.org/gtk4/getting_started.html#building-applications) documentation on my Windows Desktop Development Machine
- Also, see [here](https://docs.gtk.org/gtk4/getting_started.html#building-applications)
- Followed documentation from [here](https://github.com/wingtk/gvsbuild) to download the compiled binaries and set things up
- Used the following build command to compile the initial empty file:

```bash
gcc -Wall \
-g main.c \
-IC:/gtk/include/pango-1.0 \
-IC:/gtk/include/cairo \
-IC:/gtk/include/glib-2.0 \
-IC:/gtk/include/gtk-4.0 \
-IC:/gtk/include/harfbuzz \
-IC:/gtk/include/gdk-pixbuf-2.0 \
-IC:/gtk/include/graphene-1.0 \
-IC:/gtk/lib/glib-2.0/include \
-IC:/gtk/lib/graphene-1.0/include \
-LC:/gtk/lib \
-lgtk-win32-2.0 \
-lgdk-win32-2.0 \
-latk-1.0 \
-lgio-2.0 \
-lgdk_pixbuf-2.0 \
-lpangowin32-1.0 \
-lgdi32 \
-lpangocairo-1.0 \
-lpango-1.0 \
-lcairo -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lglib-2.0 -lintl
```

- I wanted to get a minimalist sample setup, with as little tooling as possible and see where it goes
- Adding `LIB` environment variable didn't seem to do anything
- Still not working, getting: 

![](2025-06-14-08.jpg)

- It appears that I have not correctly setup or figured out how to set the library path for the linker to recognize this