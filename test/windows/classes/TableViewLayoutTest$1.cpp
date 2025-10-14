#include <TableViewLayoutTest$1.h>

#include <TableViewLayoutTest.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $EventObject = ::java::util::EventObject;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $CaretListener = ::javax::swing::event::CaretListener;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _TableViewLayoutTest$1_FieldInfo_[] = {
	{"this$0", "LTableViewLayoutTest;", nullptr, $FINAL | $SYNTHETIC, $field(TableViewLayoutTest$1, this$0)},
	{}
};

$MethodInfo _TableViewLayoutTest$1_MethodInfo_[] = {
	{"<init>", "(LTableViewLayoutTest;)V", nullptr, 0, $method(static_cast<void(TableViewLayoutTest$1::*)($TableViewLayoutTest*)>(&TableViewLayoutTest$1::init$))},
	{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TableViewLayoutTest$1_EnclosingMethodInfo_ = {
	"TableViewLayoutTest",
	"<init>",
	"()V"
};

$InnerClassInfo _TableViewLayoutTest$1_InnerClassesInfo_[] = {
	{"TableViewLayoutTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableViewLayoutTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TableViewLayoutTest$1",
	"java.lang.Object",
	"javax.swing.event.CaretListener",
	_TableViewLayoutTest$1_FieldInfo_,
	_TableViewLayoutTest$1_MethodInfo_,
	nullptr,
	&_TableViewLayoutTest$1_EnclosingMethodInfo_,
	_TableViewLayoutTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TableViewLayoutTest"
};

$Object* allocate$TableViewLayoutTest$1($Class* clazz) {
	return $of($alloc(TableViewLayoutTest$1));
}

void TableViewLayoutTest$1::init$($TableViewLayoutTest* this$0) {
	$set(this, this$0, this$0);
}

void TableViewLayoutTest$1::caretUpdate($CaretEvent* e) {
	$var($JTextComponent, textComp, $cast($JTextComponent, $nc(e)->getSource()));
	try {
		$var($Rectangle, rect, $nc($($cast($TextUI, $nc(textComp)->getUI())))->modelToView(textComp, e->getDot()));
		$init($TableViewLayoutTest);
		$TableViewLayoutTest::yCaret = $nc(rect)->getY();
		$TableViewLayoutTest::xCaret = rect->getX();
	} catch ($BadLocationException&) {
		$var($BadLocationException, ex, $catch());
		$throwNew($RuntimeException, "Failed to get pixel position of caret"_s, ex);
	}
}

TableViewLayoutTest$1::TableViewLayoutTest$1() {
}

$Class* TableViewLayoutTest$1::load$($String* name, bool initialize) {
	$loadClass(TableViewLayoutTest$1, name, initialize, &_TableViewLayoutTest$1_ClassInfo_, allocate$TableViewLayoutTest$1);
	return class$;
}

$Class* TableViewLayoutTest$1::class$ = nullptr;