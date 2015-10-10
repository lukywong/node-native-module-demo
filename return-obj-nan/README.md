# Introduction
How to return object to node on condition using [NAN](https://github.com/nodejs/nan).

# How to run

``` bash
$ npm install --save nan
```

To include NAN like standard C++ ` #include <nan.h> `, add below config to binding.gyp

``` bash
"include_dirs" : [
    "<!(node -e \"require('nan')\")"
]
```

``` bash
$ npm run config
```

Build the project

``` bash
$ npm run build
```

Run the native moudle by nodejs

``` bash
$ npm run exe
```

# License
MIT
