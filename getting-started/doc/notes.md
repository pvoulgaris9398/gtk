# GTK Widget Toolkit Sample

## `Saturday, 6/14/25`

- Working through the [Getting Started](https://docs.gtk.org/gtk4/getting_started.html#building-applications) documentation on my Windows Desktop Development Machine
- Also, see [here](https://docs.gtk.org/gtk4/getting_started.html#building-applications)
- Followed documentation from [here](https://github.com/wingtk/gvsbuild) to download the compiled binaries and set things up
- Used the following build command to compile the initial empty file:

```bash
gcc -c main.c \
-I c:/gtk/include/pango-1.0 \
-I C:/gtk/include/cairo \
-I C:/gtk/include/glib-2.0 \
-I C:/gtk/include/gtk-4.0 \
-I c:/gtk/include/harfbuzz \
-I c:/gtk/include/gdk-pixbuf-2.0 \
-I c:/gtk/include/graphene-1.0 \
-I C:/gtk/lib/glib-2.0/include \
-I c:/gtk/lib/graphene-1.0/include
```

- I wanted to get a minimalist sample setup, with as little tooling as possible and see where it goes