# Introduction
Thanks to v8 breaking changes especially among 0.10 to 0.12 to 4.0 bring us api version nightmares, so here comes out [NAN](https://github.com/nodejs/nan), so we here install nan to ignore node version when build native modules.

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
