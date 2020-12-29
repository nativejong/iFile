//
//  DemoAViewController.swift
//  Example
//
//  Created by John Blaine on 12/29/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import iFile

class DemoAViewController: UIViewController {
    var rate : iFile?

    override func viewDidLoad() {
        super.viewDidLoad()

        self.edgesForExtendedLayout = []
        self.navigationController?.setNavigationBarHidden(true, animated: false)

        rate = iFile(frame: CGRect.zero)
        self.view.addSubview(rate!)
        self.view.backgroundColor = UIColor.red
    }
    
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
    }
    
    
    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        rate?.frame = CGRect(x: w * 0.0, y: h * 0.05, width: w * 1.0, height: h * 0.95)
    }

}
