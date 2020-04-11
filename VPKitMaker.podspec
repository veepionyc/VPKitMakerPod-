Pod::Spec.new do |s|

s.ios.deployment_target = '8.0'
s.name = "VPKitMaker"
s.summary = "VPKitMaker creates veeps."
s.version = "2.8.0-beta13"
s.license = { :type => "MIT", :file => "LICENSE" }
s.author = { "NSFoundry" => "foundry.tv@gmail.com" }
s.homepage = "http://www.veepio.com"
s.source = { :http => "https://github.com/veepionyc/VPKitMaker/raw/2.8.0-beta13/VPKitMaker.framework.zip"}
s.requires_arc = false
s.preserve_paths = "VPKitMaker.framework"
s.vendored_frameworks = "VPKitMaker.framework"
s.header_dir = "VPKitMaker"
s.dependency "VPKOpenCV", '3.4.1.a1'
s.dependency "VPKit", '2.8.0-beta13'

end

