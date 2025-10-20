#include <sun/awt/shell/Win32ShellFolder2$15.h>

#include <java/awt/Image.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$MultiResolutionIconImage.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$MultiResolutionIconImage = ::sun::awt::shell::Win32ShellFolder2$MultiResolutionIconImage;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$15_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$15, this$0)},
	{"val$getLargeIcon", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$15, val$getLargeIcon)},
	{}
};

$MethodInfo _Win32ShellFolder2$15_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(static_cast<void(Win32ShellFolder2$15::*)($Win32ShellFolder2*,bool)>(&Win32ShellFolder2$15::init$))},
	{"call", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$15_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getIcon",
	"(Z)Ljava/awt/Image;"
};

$InnerClassInfo _Win32ShellFolder2$15_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$15", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$15_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$15",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$15_FieldInfo_,
	_Win32ShellFolder2$15_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Image;>;",
	&_Win32ShellFolder2$15_EnclosingMethodInfo_,
	_Win32ShellFolder2$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$15($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$15));
}

void Win32ShellFolder2$15::init$($Win32ShellFolder2* this$0, bool val$getLargeIcon) {
	$set(this, this$0, this$0);
	this->val$getLargeIcon = val$getLargeIcon;
}

$Object* Win32ShellFolder2$15::call() {
	$useLocalCurrentObjectStackCache();
	$var($Image, newIcon, nullptr);
	$var($Image, newIcon2, nullptr);
	if (this->this$0->isLink()) {
		$var($Win32ShellFolder2, folder, this->this$0->getLinkLocation(false));
		if (folder != nullptr && folder->isLibrary()) {
			return $of(folder->getIcon(this->val$getLargeIcon));
		}
	}
	bool var$0 = this->this$0->isFileSystem();
	if (var$0 || this->this$0->isLibrary()) {
		int64_t parentIShellIcon = (this->this$0->parent != nullptr) ? $nc(($cast($Win32ShellFolder2, this->this$0->parent)))->getIShellIcon() : (int64_t)0;
		int64_t relativePIDL = this->this$0->getRelativePIDL();
		int32_t index = $Win32ShellFolder2::getIconIndex(parentIShellIcon, relativePIDL);
		if (index > 0) {
			$var($Map, imageCache, nullptr);
			if (this->this$0->isLink()) {
				$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::largeLinkedSystemImages : $Win32ShellFolder2::smallLinkedSystemImages);
			} else {
				$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::largeSystemImages : $Win32ShellFolder2::smallSystemImages);
			}
			$assign(newIcon, $cast($Image, $nc(imageCache)->get($($Integer::valueOf(index)))));
			if (newIcon == nullptr) {
				int64_t hIcon = $Win32ShellFolder2::getIcon($(this->this$0->getAbsolutePath()), this->val$getLargeIcon);
				$assign(newIcon, $Win32ShellFolder2::makeIcon(hIcon));
				$Win32ShellFolder2::disposeIcon(hIcon);
				if (newIcon != nullptr) {
					imageCache->put($($Integer::valueOf(index)), newIcon);
				}
			}
			if (newIcon != nullptr) {
				if (this->this$0->isLink()) {
					$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::smallLinkedSystemImages : $Win32ShellFolder2::largeLinkedSystemImages);
				} else {
					$assign(imageCache, this->val$getLargeIcon ? $Win32ShellFolder2::smallSystemImages : $Win32ShellFolder2::largeSystemImages);
				}
				$assign(newIcon2, $cast($Image, imageCache->get($($Integer::valueOf(index)))));
				if (newIcon2 == nullptr) {
					int64_t hIcon = $Win32ShellFolder2::getIcon($(this->this$0->getAbsolutePath()), !this->val$getLargeIcon);
					$assign(newIcon2, $Win32ShellFolder2::makeIcon(hIcon));
					$Win32ShellFolder2::disposeIcon(hIcon);
				}
			}
			if (newIcon2 != nullptr) {
				$var($Map, bothIcons, $new($HashMap, 2));
				bothIcons->put($($Integer::valueOf(this->val$getLargeIcon ? 32 : 16)), newIcon);
				bothIcons->put($($Integer::valueOf(this->val$getLargeIcon ? 16 : 32)), newIcon2);
				$assign(newIcon, $new($Win32ShellFolder2$MultiResolutionIconImage, this->val$getLargeIcon ? 32 : 16, bothIcons));
			}
		}
	}
	int64_t var$1 = this->this$0->getParentIShellFolder();
	if ($Win32ShellFolder2::hiResIconAvailable(var$1, this->this$0->getRelativePIDL()) || newIcon == nullptr) {
		int32_t size = this->val$getLargeIcon ? 32 : 16;
		$assign(newIcon, this->this$0->getIcon(size, size));
	}
	if (newIcon == nullptr) {
		$assign(newIcon, $Win32ShellFolder2::access$001(this->this$0, this->val$getLargeIcon));
	}
	return $of(newIcon);
}

Win32ShellFolder2$15::Win32ShellFolder2$15() {
}

$Class* Win32ShellFolder2$15::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$15, name, initialize, &_Win32ShellFolder2$15_ClassInfo_, allocate$Win32ShellFolder2$15);
	return class$;
}

$Class* Win32ShellFolder2$15::class$ = nullptr;

		} // shell
	} // awt
} // sun