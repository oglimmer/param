# param

helps to find parameter for bash scripting

syntax:
* 1st parameter: the parameter name to look for
* 2nd parameter: the default value if the parameter cannot be found
* all parameters from here: a parameter list to search through, where the value after a match to the first parameter is returned

# example

Let's say we have this `foo.sh` bash script:

```bash
#!/usr/bin/env bash
EMAIL=$(param email john@doe.com "$@")
echo $EMAIL
```

now you can do:

```bash
./foo.sh
# outputs john@doe.com - the default
```

or

```bash
./foo.sh --email jane@doe.com
# outputs jane@doe.com - the parameter --email
```
