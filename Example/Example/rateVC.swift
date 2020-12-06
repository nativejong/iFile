//
//  rateVC.swift
//  Example
//
//  Created by John Blaine on 12/1/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import iFile

class rateVC: UIViewController {
    var rate : iFile?

    override func viewDidLoad() {
        super.viewDidLoad()
        self.edgesForExtendedLayout = []
        
        rate = iFile(frame: CGRect.zero, bg: UIColor.red)

        self.view.addSubview(rate!)
        self.view.backgroundColor = UIColor.red
    }
    
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        self.insertData()
    }
    
    func insertData() {
        
        for _ in 0..<5{
            rate?.addIt("Cherry Blossom",
                dscr: "Kyoto",
                url: "https://raw.githubusercontent.com/nativejong/iFile/main/images/cherry_blossom.jpg",
                urld: nil )
            
            rate?.addIt("Japan",
                dscr: "Osaka",
                url: "https://raw.githubusercontent.com/nativejong/iFile/main/images/japan.png",
                urld: nil )
            
            rate?.addIt("Castle",
                dscr: "Tokyo",
                url: "https://raw.githubusercontent.com/nativejong/iFile/main/images/japan2.png",
                urld: nil )
        }

        rate?.refresh()
    }
    
    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        rate?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
    }

}
