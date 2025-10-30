#include <javax/swing/UIManager$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <javax/swing/UIManager.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <jcpp.h>

#undef MACOSX

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $UIManager = ::javax::swing::UIManager;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;

namespace javax {
	namespace swing {

$FieldInfo _UIManager$1_FieldInfo_[] = {
	{"val$props", "Ljava/util/Properties;", nullptr, $FINAL | $SYNTHETIC, $field(UIManager$1, val$props)},
	{}
};

$MethodInfo _UIManager$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Properties;)V", "()V", 0, $method(static_cast<void(UIManager$1::*)($Properties*)>(&UIManager$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UIManager$1_EnclosingMethodInfo_ = {
	"javax.swing.UIManager",
	"loadSwingProperties",
	"()Ljava/util/Properties;"
};

$InnerClassInfo _UIManager$1_InnerClassesInfo_[] = {
	{"javax.swing.UIManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.UIManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_UIManager$1_FieldInfo_,
	_UIManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_UIManager$1_EnclosingMethodInfo_,
	_UIManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIManager"
};

$Object* allocate$UIManager$1($Class* clazz) {
	return $of($alloc(UIManager$1));
}

void UIManager$1::init$($Properties* val$props) {
	$set(this, val$props, val$props);
}

$Object* UIManager$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$OSInfo$OSType* osType = $cast($OSInfo$OSType, $AccessController::doPrivileged($($OSInfo::getOSTypeAction())));
	$init($OSInfo$OSType);
	if (osType == $OSInfo$OSType::MACOSX) {
		$nc(this->val$props)->put("swing.defaultlaf"_s, $($UIManager::getSystemLookAndFeelClassName()));
	}
	try {
		$var($File, file, $new($File, $($UIManager::makeSwingPropertiesFilename())));
		if (file->exists()) {
			$var($FileInputStream, ins, $new($FileInputStream, file));
			$nc(this->val$props)->load(static_cast<$InputStream*>(ins));
			ins->close();
		}
	} catch ($Exception& e) {
	}
	$UIManager::checkProperty(this->val$props, "swing.defaultlaf"_s);
	$UIManager::checkProperty(this->val$props, "swing.auxiliarylaf"_s);
	$UIManager::checkProperty(this->val$props, "swing.plaf.multiplexinglaf"_s);
	$UIManager::checkProperty(this->val$props, "swing.installedlafs"_s);
	$UIManager::checkProperty(this->val$props, "swing.disablenavaids"_s);
	return $of(nullptr);
}

UIManager$1::UIManager$1() {
}

$Class* UIManager$1::load$($String* name, bool initialize) {
	$loadClass(UIManager$1, name, initialize, &_UIManager$1_ClassInfo_, allocate$UIManager$1);
	return class$;
}

$Class* UIManager$1::class$ = nullptr;

	} // swing
} // javax