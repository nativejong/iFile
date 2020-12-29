<!--
*** Thanks for checking out this README Template. If you have a suggestion that would
*** make this better, please fork the repo and create a pull request or simply open
*** an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
***
***
***
*** To avoid retyping too much info. Do a search and replace for the following:
*** github_username, repo_name, twitter_handle, email
-->

<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="/images/japan.png" width="30%" height="30%"/>
  </a>

  <h3 align="center">iFile</h3>

  <p align="center">
     iFile is a quick and easy way to add a Login/Signup UX to your iOS app.
  </p>
</p>



<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
  * [Built With](#built-with)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
* [Usage](#usage)
* [Roadmap](#roadmap)
* [Contributing](#contributing)
* [License](#license)
* [Contact](#contact)
* [Acknowledgements](#acknowledgements)



<!-- ABOUT THE PROJECT -->
## About The Project

iFile is a quick and easy way to add a Login/Signup UX to your iOS app.
<table  border="0" >
  <tr>
    <td>Login</td>
    <td><img src="/images/iFile.gif" width=200 height=400></td>
  </tr>
 </table>


### Built With

* [XCode Version 11.7](#about-the-project) 


<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps.

### Prerequisites

Required software and how to install them.
* install cocoapods
```sh
    sudo gem install cocoapods 
```

### Installation

1. Add to Podfile
```sh
    pod 'iFile', :git => 'https://github.com/nativejong/iFile.git'
```
2. Install this pod
```sh
    pod install 
```

3. Open the Xcode workspace
```sh
    open [app name].xcworkspace 
```

4. Import the library (header's file)
```sh
    @import iFile;
```

5. Declare the library (header's file)
```sh
    @property (nonatomic, strong) iFile *myFrame;
```

6. Initialize iFile Framework
```sh
    CGRect rect = CGRectMake( 0.0, 0.0,  159.0,  300.0 );
    self.myFrame = [[iFile alloc] initWithFrame:rect];
    [self.view addSubview:self.myFrame];
```

7. Initialize iFile Framework
```sh
    easy = iFile(frame: CGRect.zero)
```

8. Monitor iFile activities
```sh
    easy?.addImage("Japan", photo: UIImage(named: "japan2"), x: 0.0, y: 0.0, w: 1.0, h: 1.0 )

    easy?.addText("Full Name", x: 0.1, y: 0.3, w: 0.8, h: 0.08, photo: UIImage(named: "person") )
    easy?.addText("Password", x: 0.1, y: 0.4, w: 0.8, h: 0.08, photo:  UIImage(named: "key" ) )

    easy?.refresh()
    
```

9. Monitor iFile activities in swift
```sh
    
  easy?.watch({ (a : String?) in
      print( a )
  }, image: { ( a : String?) in
      print( a )
  }, text: { ( a: String?, b : String?, setError : (( _ d : String?, _ e : UIColor?, _ k : Bool ) -> Void)?) in
      
    if ( b == "0000") {
      setError!( "zero", UIColor.red, false )
    } else {
      setError!( "", UIColor.red, false )
    }
      
  }, error: { ( a: String?, b : String?, setError : (( _ d : String?, _ e : UIColor?, _ k : Bool ) -> Void)?) in
  })


```



<!-- USAGE EXAMPLES -->
## Usage

_For more examples, please refer to the [Documentation](https://example.com)_



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact
* Email: [native.jong@gmail.com]()

<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements
* [Java Blaine]()

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/github_username/repo.svg?style=flat-square
[contributors-url]: https://github.com/github_username/repo/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/github_username/repo.svg?style=flat-square
[forks-url]: https://github.com/github_username/repo/network/members
[stars-shield]: https://img.shields.io/github/stars/github_username/repo.svg?style=flat-square
[stars-url]: https://github.com/github_username/repo/stargazers
[issues-shield]: https://img.shields.io/github/issues/github_username/repo.svg?style=flat-square
[issues-url]: https://github.com/github_username/repo/issues
[license-shield]: https://img.shields.io/github/license/github_username/repo.svg?style=flat-square
[license-url]: https://github.com/github_username/repo/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/github_username
[product-screenshot]: images/screenshot.png