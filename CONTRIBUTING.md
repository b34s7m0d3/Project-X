# Contributing to Project-X

:+1::tada: First off, your contribution is much appreciated! :tada::+1:

#### Table Of Contents

[Code of Conduct](#code-of-conduct)

[I don't want to read this whole thing, I just have a question!!!](#i-dont-want-to-read-this-whole-thing-i-just-have-a-question)

[What should I know before I get started?](#what-should-i-know-before-i-get-started)
  * [Libtcod library](#libtcod-library)
  * [Design Decisions](#design-decisions)
  * [Labels](#labels)

[How Can I Contribute?](#how-can-i-contribute)
  * [Reporting Bugs](#reporting-bugs)
  * [Suggesting Enhancements](#suggesting-enhancements)
  * [Your First Code Contribution](#your-first-code-contribution)
  * [Pull Requests](#pull-requests)

[Styleguides](#styleguides)
  * [Git Commit Messages](#git-commit-messages)
  * [Documentation Styleguide](#documentation-styleguide)

[Additional Notes](#additional-notes)

## Code of Conduct

This project aims to satisfy my hunger for improvement. I am still learning to make a proper rougelike so any help is appreciated and welcome. By participating, you are expected to uphold this code.

## I don't want to read this whole thing I just have a question!!!

> **Note:** Please don't file an issue to ask a question. You'll get faster results by using the resources below.

* Will find a suitable form to answer questions as soon as the need arises
    * This might be slack

## What should I know before I get started?

### Labels

The Project will use labels to determine issues and feature requests. More will follow, once I know how it can work best!

### Libtcod library

The library was the first thing I found when I wanted to create a Rougelike. Following this [tutorial](http://www.roguebasin.com/index.php?title=Complete_roguelike_tutorial_using_C%2B%2B_and_libtcod_-_part_1:_setting_up) I was able to create the first working version of the project.

Current status and what is different from the tutorial:
  * Updated version of the dll files 
  * Still using the /lib folder form the 1.5.2 version
  * Running with Visual studio
    * If you want to run it the same way, please disable precompiled headers. For some reason they don`t like each other.
  
  
### Design Decisions

Current design decisions will be created on the Project wiki page. (Will link them as soon as they are finished)

## How Can I Contribute?

### Reporting Bugs

This section guides you through submitting a bug report for Project-X. Following these guidelines helps maintainers and the community understand your report :pencil:, reproduce the behavior :computer: :computer:, and find related reports :mag_right:.

Before creating bug reports, please check [this list](#before-submitting-a-bug-report) as you might find out that you don't need to create one. When you are creating a bug report, please [include as many details as possible](#how-do-i-submit-a-good-bug-report).

> **Note:** If you find a **Closed** issue that seems like it is the same thing that you're experiencing, open a new issue and include a link to the original issue in the body of your new one.

#### Before Submitting A Bug Report

* **Check the [debugging guide](http://www.cplusplus.com/forum/articles/28767/).** The lovely people from cplusplus.com did a nice article on the topic.
* **Check the linker settings (will add Wiki page later).** 99% of my problems with the project came from linker issues and missing dll-s. This might solve your problem as well.

#### How Do I Submit A (Good) Bug Report?

Bugs are tracked as [GitHub issues](https://guides.github.com/features/issues/).

Explain the problem and include additional details to help maintainers reproduce the problem:

* **Use a clear and descriptive title** for the issue to identify the problem.
* **Describe the exact steps which reproduce the problem** in as many details as possible. For example, start by explaining how you started the game, e.g. which version did you start, or how you compiled. When listing steps, **don't just say what you did, but explain how you did it**. For example, you compiled with x64 debugger and tried to open up the executable with Administrator rights.
* **Provide specific examples to demonstrate the steps**. Include links to files or GitHub projects, or copy/pasteable snippets, which you use in those examples. If you're providing snippets in the issue, use [Markdown code blocks](https://help.github.com/articles/markdown-basics/#multiple-lines).
* **Describe the behavior you observed after following the steps** and point out what exactly is the problem with that behavior.
* **Explain which behavior you expected to see instead and why.**
* **Include screenshots and animated GIFs** which show you following the described steps and clearly demonstrate the problem.
* **If you're reporting that Project-X crashed**, include a crash report with a stack trace from the operating system.
* **If the problem is related to performance or memory**, include a CPU profile capture with your report.
* **If the problem wasn't triggered by a specific action**, describe what you were doing before the problem happened and share more information using the guidelines below.

Provide more context by answering these questions:

* **Can you reproduce the problem in x64 or x86?**
* **Did the problem start happening recently** (e.g. after updating to a new version of the game) or was this always a problem?
* If the problem started happening recently, **can you reproduce the problem in an older version of the game?** What's the most recent version in which the problem doesn't happen?
* **Can you reliably reproduce the issue?** If not, provide details about how often the problem happens and under which conditions it normally happens.
* If the problem is related to working with files (e.g. saving and loading), **does the problem happen for all files or only to the older versions?**

Include details about your configuration and environment:

* **What's the name and version of the OS you're using**?
* **Are you running the game in a virtual machine?** If so, which VM software are you using and which operating systems and versions are used?

### Suggesting Enhancements

This section guides you through submitting an enhancement suggestion for the game, including completely new features and minor improvements to existing functionality. Following these guidelines helps me and the community understand your suggestion :pencil: and find related suggestions :mag_right:.

Before creating enhancement suggestions, please check [this list](#before-submitting-an-enhancement-suggestion) as you might find out that you don't need to create one. When you are creating an enhancement suggestion, please [include as many details as possible](#how-do-i-submit-a-good-enhancement-suggestion).

#### Before Submitting An Enhancement Suggestion

* **Check the Design document** for tips — you might discover that the enhancement is already available. Most importantly, check if you are using tha latest commit.
* **Check if there's already a story (will come later) which provides that enhancement.**

#### How Do I Submit A (Good) Enhancement Suggestion?

Enhancement suggestions are tracked as [GitHub issues](https://guides.github.com/features/issues/). After you've determined [labels](#labels) your enhancement suggestion is related to, create an issue on that label and provide the following information:

* **Use a clear and descriptive title** for the issue to identify the suggestion.
* **Provide a step-by-step description of the suggested enhancement** in as many details as possible.
* **Provide specific examples to demonstrate the steps**. Include copy/pasteable snippets which you use in those examples, as [Markdown code blocks](https://help.github.com/articles/markdown-basics/#multiple-lines).
* **Describe the current behavior** and **explain which behavior you expected to see instead** and why.
* **Include screenshots and animated GIFs** which help you demonstrate the steps or point out the part of the game which the suggestion is related to.
* **If possible use Target Game Footage** to demonstrate the benefits in a clearer way.
* **Explain why this enhancement would be useful** to most Players and isn't something that can or should be implemented.
* **List some reference games or applications where this enhancement exists.**

### Your First Code Contribution

Unsure where to begin contributing to Project-X? You can start by looking through these `beginner` and `help-wanted` issues:

* [Beginner issues][beginner] - issues which should only require a few lines of code, and a test or two.
* [Help wanted issues][help-wanted] - issues which should be a bit more involved than `beginner` issues.

Both issue lists are sorted by total number of comments. While not perfect, number of comments is a reasonable proxy for impact a given change will have.

### Pull Requests

* Fill in template
* Do not include issue numbers in the PR title
* Include screenshots and animated GIFs in your pull request whenever possible.
* Follow the styleguides (what I used in the project so far. Will extend documentation).
* End all files with a newline

## Styleguides

### Git Commit Messages

* Use the present tense ("Add feature" not "Added feature")
* Use the imperative mood ("Move cursor to..." not "Moves cursor to...")
* Limit the first line to 72 characters or less
* Reference issues and pull requests liberally after the first line
* When only changing documentation, include `[ci skip]` in the commit title
* Consider starting the commit message with an applicable emoji:
    * :art: `:art:` when improving the format/structure of the code
    * :racehorse: `:racehorse:` when improving performance
    * :non-potable_water: `:non-potable_water:` when plugging memory leaks
    * :memo: `:memo:` when writing docs
    * :penguin: `:penguin:` when fixing something on Linux
    * :apple: `:apple:` when fixing something on macOS
    * :checkered_flag: `:checkered_flag:` when fixing something on Windows
    * :bug: `:bug:` when fixing a bug
    * :fire: `:fire:` when removing code or files
    * :green_heart: `:green_heart:` when fixing the CI build
    * :white_check_mark: `:white_check_mark:` when adding tests
    * :lock: `:lock:` when dealing with security
    * :arrow_up: `:arrow_up:` when upgrading dependencies
    * :arrow_down: `:arrow_down:` when downgrading dependencies
    * :shirt: `:shirt:` when removing linter warnings

### C++ Styleguide

Will update as soon as the style has been decided.

### Documentation Styleguide

* Include thoughtfully-worded, well-structured specs in the Wiki page.
* Treat `describe` as a noun or situation.
* Treat `it` as a statement about state or how an operation changes state.
* Use [Markdown](https://daringfireball.net/projects/markdown).
* Reference methods and classes in markdown with the custom `{}` notation:
    * Reference classes with `{ClassName}`
    * Reference instance methods with `{ClassName::methodName}`
    * Reference class methods with `{ClassName.methodName}`


## Additional Notes

A lot of things are missing, but will update them when it makes sense. 
I took the documentation from the wonderful people at [Atom](https://github.com/atom/atom) as a basis.
