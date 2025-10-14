#include <TreeClipTest.h>

#include <TreeClipTest$1.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $TreeClipTest$1 = ::TreeClipTest$1;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _TreeClipTest_FieldInfo_[] = {
	{"passed", "Z", nullptr, $STATIC, $staticField(TreeClipTest, passed)},
	{}
};

$MethodInfo _TreeClipTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeClipTest::*)()>(&TreeClipTest::init$))},
	{"checkImage", "(Ljava/awt/image/BufferedImage;I)Z", nullptr, $STATIC, $method(static_cast<bool(*)($BufferedImage*,int32_t)>(&TreeClipTest::checkImage))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TreeClipTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TreeClipTest_InnerClassesInfo_[] = {
	{"TreeClipTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TreeClipTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TreeClipTest",
	"java.lang.Object",
	nullptr,
	_TreeClipTest_FieldInfo_,
	_TreeClipTest_MethodInfo_,
	nullptr,
	nullptr,
	_TreeClipTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TreeClipTest$1"
};

$Object* allocate$TreeClipTest($Class* clazz) {
	return $of($alloc(TreeClipTest));
}

bool TreeClipTest::passed = false;

void TreeClipTest::init$() {
}

bool TreeClipTest::checkImage($BufferedImage* img, int32_t clipY) {
	$init(TreeClipTest);
	for (int32_t y = clipY; y < $nc(img)->getHeight(); ++y) {
		for (int32_t x = 0; x < img->getWidth(); ++x) {
			if (((int32_t)(img->getRGB(x, y) & (uint32_t)0x00FFFFFF)) != 0x00FFFFFF) {
				return false;
			}
		}
	}
	return true;
}

void TreeClipTest::main($StringArray* args) {
	$init(TreeClipTest);
	$SwingUtilities::invokeAndWait($$new($TreeClipTest$1));
	if (!TreeClipTest::passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	} else {
		$init($System);
		$nc($System::out)->println("Passed."_s);
	}
}

void clinit$TreeClipTest($Class* class$) {
	TreeClipTest::passed = true;
}

TreeClipTest::TreeClipTest() {
}

$Class* TreeClipTest::load$($String* name, bool initialize) {
	$loadClass(TreeClipTest, name, initialize, &_TreeClipTest_ClassInfo_, clinit$TreeClipTest, allocate$TreeClipTest);
	return class$;
}

$Class* TreeClipTest::class$ = nullptr;