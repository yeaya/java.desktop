#include <SystemIconTest.h>

#include <java/awt/Image.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

$FieldInfo _SystemIconTest_FieldInfo_[] = {
	{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $STATIC | $FINAL, $staticField(SystemIconTest, fsv)},
	{}
};

$MethodInfo _SystemIconTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SystemIconTest::*)()>(&SystemIconTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SystemIconTest::main))},
	{"negativeTests", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&SystemIconTest::negativeTests))},
	{"testSystemIcon", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&SystemIconTest::testSystemIcon))},
	{"testSystemIcon", "(Ljava/io/File;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($File*,bool)>(&SystemIconTest::testSystemIcon))},
	{}
};

$ClassInfo _SystemIconTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SystemIconTest",
	"java.lang.Object",
	nullptr,
	_SystemIconTest_FieldInfo_,
	_SystemIconTest_MethodInfo_
};

$Object* allocate$SystemIconTest($Class* clazz) {
	return $of($alloc(SystemIconTest));
}

$FileSystemView* SystemIconTest::fsv = nullptr;

void SystemIconTest::init$() {
}

void SystemIconTest::main($StringArray* args) {
	$init(SystemIconTest);
	testSystemIcon();
	negativeTests();
}

void SystemIconTest::testSystemIcon() {
	$init(SystemIconTest);
	$useLocalCurrentObjectStackCache();
	$var($String, os, $System::getProperty("os.name"_s));
	if ($nc(os)->startsWith("Windows"_s)) {
		$var($String, windir, $System::getenv("windir"_s));
		testSystemIcon($$new($File, windir), true);
		testSystemIcon($$new($File, $$str({windir, "/explorer.exe"_s})), true);
	} else {
		$var($String, homedir, $System::getProperty("user.home"_s));
		testSystemIcon($$new($File, homedir), false);
	}
}

void SystemIconTest::negativeTests() {
	$init(SystemIconTest);
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, nullptr);
	try {
		$assign(icon, $nc(SystemIconTest::fsv)->getSystemIcon($$new($File, "."_s), -1, 16));
		$throwNew($RuntimeException, "Negative size icon should throw invalid argument exception"_s);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	$assign(icon, $nc(SystemIconTest::fsv)->getSystemIcon($$new($File, "thereisdefinitelynosuchfile.why"_s), 16, 16));
	if (icon != nullptr) {
		$throwNew($RuntimeException, "Icons for files with invalid names should be null"_s);
	}
}

void SystemIconTest::testSystemIcon($File* file, bool implComplete) {
	$init(SystemIconTest);
	$useLocalCurrentObjectStackCache();
	$var($ints, sizes, $new($ints, {
		16,
		32,
		48,
		64,
		128
	}));
	{
		$var($ints, arr$, sizes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t size = arr$->get(i$);
			{
				$var($ImageIcon, icon, $cast($ImageIcon, $nc(SystemIconTest::fsv)->getSystemIcon(file, size, size)));
				if (icon == nullptr) {
					$throwNew($RuntimeException, "icon is null!!!"_s);
				}
				if (implComplete && $nc(icon)->getIconWidth() != size) {
					$throwNew($RuntimeException, $$str({"Wrong icon size "_s, $$str(icon->getIconWidth()), " when requested "_s, $$str(size)}));
				}
				if ($instanceOf($MultiResolutionImage, $($nc(icon)->getImage()))) {
					$var($MultiResolutionImage, mri, $cast($MultiResolutionImage, icon->getImage()));
					if ($nc(mri)->getResolutionVariant((double)size, (double)size) == nullptr) {
						$throwNew($RuntimeException, $$str({"There is no suitable variant for the size "_s, $$str(size), " in the multi resolution icon"_s}));
					}
				} else if (implComplete) {
					$throwNew($RuntimeException, "icon is supposed to be multi-resolution but it is not"_s);
				}
			}
		}
	}
}

void clinit$SystemIconTest($Class* class$) {
	$assignStatic(SystemIconTest::fsv, $FileSystemView::getFileSystemView());
}

SystemIconTest::SystemIconTest() {
}

$Class* SystemIconTest::load$($String* name, bool initialize) {
	$loadClass(SystemIconTest, name, initialize, &_SystemIconTest_ClassInfo_, clinit$SystemIconTest, allocate$SystemIconTest);
	return class$;
}

$Class* SystemIconTest::class$ = nullptr;