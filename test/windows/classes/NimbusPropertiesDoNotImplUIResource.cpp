#include <NimbusPropertiesDoNotImplUIResource.h>

#include <java/awt/Color.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

#undef LF

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $UIResource = ::javax::swing::plaf::UIResource;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

$FieldInfo _NimbusPropertiesDoNotImplUIResource_FieldInfo_[] = {
	{"defPropertyKeys", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NimbusPropertiesDoNotImplUIResource, defPropertyKeys)},
	{"failedKeys", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(NimbusPropertiesDoNotImplUIResource, failedKeys)},
	{}
};

$MethodInfo _NimbusPropertiesDoNotImplUIResource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NimbusPropertiesDoNotImplUIResource::*)()>(&NimbusPropertiesDoNotImplUIResource::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NimbusPropertiesDoNotImplUIResource::main)), "java.lang.Exception"},
	{"verifyProperty", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&NimbusPropertiesDoNotImplUIResource::verifyProperty))},
	{}
};

$ClassInfo _NimbusPropertiesDoNotImplUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NimbusPropertiesDoNotImplUIResource",
	"java.lang.Object",
	nullptr,
	_NimbusPropertiesDoNotImplUIResource_FieldInfo_,
	_NimbusPropertiesDoNotImplUIResource_MethodInfo_
};

$Object* allocate$NimbusPropertiesDoNotImplUIResource($Class* clazz) {
	return $of($alloc(NimbusPropertiesDoNotImplUIResource));
}

$StringArray* NimbusPropertiesDoNotImplUIResource::defPropertyKeys = nullptr;
$String* NimbusPropertiesDoNotImplUIResource::failedKeys = nullptr;

void NimbusPropertiesDoNotImplUIResource::init$() {
}

void NimbusPropertiesDoNotImplUIResource::main($StringArray* args) {
	$init(NimbusPropertiesDoNotImplUIResource);
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, installedLookAndFeels, nullptr);
	$assign(installedLookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, installedLookAndFeels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
					$assignStatic(NimbusPropertiesDoNotImplUIResource::failedKeys, nullptr);
					{
						$var($StringArray, arr$, NimbusPropertiesDoNotImplUIResource::defPropertyKeys);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($String, propertyKey, arr$->get(i$));
							{
								verifyProperty(propertyKey);
							}
						}
					}
					if (NimbusPropertiesDoNotImplUIResource::failedKeys != nullptr) {
						$throwNew($RuntimeException, $$str({"JTree renderer Properties "_s, NimbusPropertiesDoNotImplUIResource::failedKeys, " are not instance of UIResource for "_s, $($nc(LF)->getClassName())}));
					}
				} catch ($UnsupportedLookAndFeelException&) {
					$var($UnsupportedLookAndFeelException, e, $catch());
					$init($System);
					$nc($System::out)->println($$str({"Note: LookAndFeel "_s, $($nc(LF)->getClassName()), " is not supported on this configuration"_s}));
				}
			}
		}
	}
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$var($Color, color1, $nc(($cast($NimbusLookAndFeel, $($UIManager::getLookAndFeel()))))->getDerivedColor("text"_s, (float)0, (float)0, (float)0, 0, false));
	if ($instanceOf($UIResource, color1)) {
		$throwNew($RuntimeException, "color1 should not be instance of UIResource"_s);
	}
	$var($Color, color2, $nc(($cast($NimbusLookAndFeel, $($UIManager::getLookAndFeel()))))->getDerivedColor("text"_s, (float)0, (float)0, (float)0, 0, true));
	if (!($instanceOf($UIResource, color2))) {
		$throwNew($RuntimeException, "color2 should be instance of UIResource"_s);
	}
}

void NimbusPropertiesDoNotImplUIResource::verifyProperty($String* propertyKey) {
	$init(NimbusPropertiesDoNotImplUIResource);
	$useLocalCurrentObjectStackCache();
	$var($Object, property, $UIManager::get(propertyKey));
	if (property == nullptr) {
		return;
	}
	if (!($instanceOf($UIResource, property))) {
		if (NimbusPropertiesDoNotImplUIResource::failedKeys == nullptr) {
			$assignStatic(NimbusPropertiesDoNotImplUIResource::failedKeys, $str({":"_s, propertyKey}));
		} else {
			$plusAssignStatic(NimbusPropertiesDoNotImplUIResource::failedKeys, $$str({","_s, propertyKey}));
		}
	}
}

void clinit$NimbusPropertiesDoNotImplUIResource($Class* class$) {
	$assignStatic(NimbusPropertiesDoNotImplUIResource::defPropertyKeys, $new($StringArray, {
		"Tree.leafIcon"_s,
		"Tree.closedIcon"_s,
		"Tree.openIcon"_s,
		"Tree.selectionForeground"_s,
		"Tree.textForeground"_s,
		"Tree.selectionBackground"_s,
		"Tree.textBackground"_s,
		"Tree.selectionBorderColor"_s
	}));
	$assignStatic(NimbusPropertiesDoNotImplUIResource::failedKeys, nullptr);
}

NimbusPropertiesDoNotImplUIResource::NimbusPropertiesDoNotImplUIResource() {
}

$Class* NimbusPropertiesDoNotImplUIResource::load$($String* name, bool initialize) {
	$loadClass(NimbusPropertiesDoNotImplUIResource, name, initialize, &_NimbusPropertiesDoNotImplUIResource_ClassInfo_, clinit$NimbusPropertiesDoNotImplUIResource, allocate$NimbusPropertiesDoNotImplUIResource);
	return class$;
}

$Class* NimbusPropertiesDoNotImplUIResource::class$ = nullptr;