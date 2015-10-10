{
  'targets': [
    {
      'target_name': 'hello',
      'sources': [
        './hello.cc',
        './addon.cc'
      ],
      'include_dirs': [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}
