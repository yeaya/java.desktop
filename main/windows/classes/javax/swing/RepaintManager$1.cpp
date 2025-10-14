#include <javax/swing/RepaintManager$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/RepaintManager.h>
#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingAccessor$RepaintManagerAccessor = ::sun::swing::SwingAccessor$RepaintManagerAccessor;
using $SwingUtilities2$RepaintListener = ::sun::swing::SwingUtilities2$RepaintListener;

namespace javax {
	namespace swing {

$MethodInfo _RepaintManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintManager$1::*)()>(&RepaintManager$1::init$))},
	{"addRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC},
	{"removeRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintManager$1_EnclosingMethodInfo_ = {
	"javax.swing.RepaintManager",
	nullptr,
	nullptr
};

$InnerClassInfo _RepaintManager$1_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$1", nullptr, nullptr, 0},
	{"sun.swing.SwingAccessor$RepaintManagerAccessor", "sun.swing.SwingAccessor", "RepaintManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RepaintManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RepaintManager$1",
	"java.lang.Object",
	"sun.swing.SwingAccessor$RepaintManagerAccessor",
	nullptr,
	_RepaintManager$1_MethodInfo_,
	nullptr,
	&_RepaintManager$1_EnclosingMethodInfo_,
	_RepaintManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$1($Class* clazz) {
	return $of($alloc(RepaintManager$1));
}

void RepaintManager$1::init$() {
}

void RepaintManager$1::addRepaintListener($RepaintManager* rm, $SwingUtilities2$RepaintListener* l) {
	$nc(rm)->addRepaintListener(l);
}

void RepaintManager$1::removeRepaintListener($RepaintManager* rm, $SwingUtilities2$RepaintListener* l) {
	$nc(rm)->removeRepaintListener(l);
}

RepaintManager$1::RepaintManager$1() {
}

$Class* RepaintManager$1::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$1, name, initialize, &_RepaintManager$1_ClassInfo_, allocate$RepaintManager$1);
	return class$;
}

$Class* RepaintManager$1::class$ = nullptr;

	} // swing
} // javax