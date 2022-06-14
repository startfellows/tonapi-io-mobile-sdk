Pod::Spec.new do |spec|
    spec.name                     = 'TonApiSDK'
    spec.version                  = '1.0'
    spec.homepage                 = 'tonapi.io'
    spec.source                   = { :git => "git@github.com:startfellows/tonapi-io-mobile-sdk.git" }
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'TonApiSDK for iOS and Android'
    spec.vendored_frameworks      = 'build/cocoapods/framework/TonApiSDK.framework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.1'
                
                
    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':TonApiSDK',
        'PRODUCT_MODULE_NAME' => 'TonApiSDK',
    }
                
    spec.script_phases = [
        {
            :name => 'Build TonApiSDK',
            :execution_position => :before_compile,
            :shell_path => '/bin/sh',
            :script => <<-SCRIPT
                if [ "YES" = "$COCOAPODS_SKIP_KOTLIN_BUILD" ]; then
                  echo "Skipping Gradle build task invocation due to COCOAPODS_SKIP_KOTLIN_BUILD environment variable set to \"YES\""
                  exit 0
                fi
                set -ev
                REPO_ROOT="$PODS_TARGET_SRCROOT"
                "$REPO_ROOT/../gradlew" -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
                    -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
                    -Pkotlin.native.cocoapods.archs="$ARCHS" \
                    -Pkotlin.native.cocoapods.configuration="$CONFIGURATION"
            SCRIPT
        }
    ]
                
end