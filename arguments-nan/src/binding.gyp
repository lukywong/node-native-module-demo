{
  'targets': [
    {
      'target_name': 'add',
      'sources': [
        './add.cc',
        './addon.cc'
      ],
      'include_dirs': [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}
