#include <ListSelectionModelTest$1.h>

#include <ListSelectionModelTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <jcpp.h>

using $ListSelectionModelTest = ::ListSelectionModelTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _ListSelectionModelTest$1_FieldInfo_[] = {
	{"val$lookAndFeelInfo", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $FINAL | $SYNTHETIC, $field(ListSelectionModelTest$1, val$lookAndFeelInfo)},
	{}
};

$MethodInfo _ListSelectionModelTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", "()V", 0, $method(static_cast<void(ListSelectionModelTest$1::*)($UIManager$LookAndFeelInfo*)>(&ListSelectionModelTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ListSelectionModelTest$1_EnclosingMethodInfo_ = {
	"ListSelectionModelTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ListSelectionModelTest$1_InnerClassesInfo_[] = {
	{"ListSelectionModelTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ListSelectionModelTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ListSelectionModelTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ListSelectionModelTest$1_FieldInfo_,
	_ListSelectionModelTest$1_MethodInfo_,
	nullptr,
	&_ListSelectionModelTest$1_EnclosingMethodInfo_,
	_ListSelectionModelTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ListSelectionModelTest"
};

$Object* allocate$ListSelectionModelTest$1($Class* clazz) {
	return $of($alloc(ListSelectionModelTest$1));
}

void ListSelectionModelTest$1::init$($UIManager$LookAndFeelInfo* val$lookAndFeelInfo) {
	$set(this, val$lookAndFeelInfo, val$lookAndFeelInfo);
}

void ListSelectionModelTest$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$ListSelectionModelTest::CreateGUIAndTest($($nc(this->val$lookAndFeelInfo)->getClassName()));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		e->printStackTrace();
		$throwNew($RuntimeException, "Exception while running test"_s);
	}
}

ListSelectionModelTest$1::ListSelectionModelTest$1() {
}

$Class* ListSelectionModelTest$1::load$($String* name, bool initialize) {
	$loadClass(ListSelectionModelTest$1, name, initialize, &_ListSelectionModelTest$1_ClassInfo_, allocate$ListSelectionModelTest$1);
	return class$;
}

$Class* ListSelectionModelTest$1::class$ = nullptr;