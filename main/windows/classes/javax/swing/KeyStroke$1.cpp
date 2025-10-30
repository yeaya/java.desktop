#include <javax/swing/KeyStroke$1.h>

#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingAccessor$KeyStrokeAccessor = ::sun::swing::SwingAccessor$KeyStrokeAccessor;

namespace javax {
	namespace swing {

$MethodInfo _KeyStroke$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyStroke$1::*)()>(&KeyStroke$1::init$))},
	{"create", "()Ljavax/swing/KeyStroke;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyStroke$1_EnclosingMethodInfo_ = {
	"javax.swing.KeyStroke",
	nullptr,
	nullptr
};

$InnerClassInfo _KeyStroke$1_InnerClassesInfo_[] = {
	{"javax.swing.KeyStroke$1", nullptr, nullptr, 0},
	{"sun.swing.SwingAccessor$KeyStrokeAccessor", "sun.swing.SwingAccessor", "KeyStrokeAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStroke$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.KeyStroke$1",
	"java.lang.Object",
	"sun.swing.SwingAccessor$KeyStrokeAccessor",
	nullptr,
	_KeyStroke$1_MethodInfo_,
	nullptr,
	&_KeyStroke$1_EnclosingMethodInfo_,
	_KeyStroke$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.KeyStroke"
};

$Object* allocate$KeyStroke$1($Class* clazz) {
	return $of($alloc(KeyStroke$1));
}

void KeyStroke$1::init$() {
}

$KeyStroke* KeyStroke$1::create() {
	return $new($KeyStroke);
}

KeyStroke$1::KeyStroke$1() {
}

$Class* KeyStroke$1::load$($String* name, bool initialize) {
	$loadClass(KeyStroke$1, name, initialize, &_KeyStroke$1_ClassInfo_, allocate$KeyStroke$1);
	return class$;
}

$Class* KeyStroke$1::class$ = nullptr;

	} // swing
} // javax