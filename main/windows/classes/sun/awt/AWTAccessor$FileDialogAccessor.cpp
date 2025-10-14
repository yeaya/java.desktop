#include <sun/awt/AWTAccessor$FileDialogAccessor.h>

#include <java/awt/FileDialog.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $FileDialog = ::java::awt::FileDialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$FileDialogAccessor_MethodInfo_[] = {
	{"isMultipleMode", "(Ljava/awt/FileDialog;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setDirectory", "(Ljava/awt/FileDialog;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFile", "(Ljava/awt/FileDialog;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFiles", "(Ljava/awt/FileDialog;[Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$FileDialogAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$FileDialogAccessor", "sun.awt.AWTAccessor", "FileDialogAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$FileDialogAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$FileDialogAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$FileDialogAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$FileDialogAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$FileDialogAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$FileDialogAccessor));
}

$Class* AWTAccessor$FileDialogAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$FileDialogAccessor, name, initialize, &_AWTAccessor$FileDialogAccessor_ClassInfo_, allocate$AWTAccessor$FileDialogAccessor);
	return class$;
}

$Class* AWTAccessor$FileDialogAccessor::class$ = nullptr;

	} // awt
} // sun