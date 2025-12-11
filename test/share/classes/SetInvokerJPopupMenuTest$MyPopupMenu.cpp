#include <SetInvokerJPopupMenuTest$MyPopupMenu.h>

#include <SetInvokerJPopupMenuTest.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _SetInvokerJPopupMenuTest$MyPopupMenu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SetInvokerJPopupMenuTest$MyPopupMenu::*)()>(&SetInvokerJPopupMenuTest$MyPopupMenu::init$))},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SetInvokerJPopupMenuTest$MyPopupMenu_InnerClassesInfo_[] = {
	{"SetInvokerJPopupMenuTest$MyPopupMenu", "SetInvokerJPopupMenuTest", "MyPopupMenu", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SetInvokerJPopupMenuTest$MyPopupMenu_ClassInfo_ = {
	$ACC_SUPER,
	"SetInvokerJPopupMenuTest$MyPopupMenu",
	"javax.swing.JPopupMenu",
	nullptr,
	nullptr,
	_SetInvokerJPopupMenuTest$MyPopupMenu_MethodInfo_,
	nullptr,
	nullptr,
	_SetInvokerJPopupMenuTest$MyPopupMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SetInvokerJPopupMenuTest"
};

$Object* allocate$SetInvokerJPopupMenuTest$MyPopupMenu($Class* clazz) {
	return $of($alloc(SetInvokerJPopupMenuTest$MyPopupMenu));
}

void SetInvokerJPopupMenuTest$MyPopupMenu::init$() {
	$JPopupMenu::init$();
}

void SetInvokerJPopupMenuTest$MyPopupMenu::setVisible(bool state) {
	$useLocalCurrentObjectStackCache();
	if (!state) {
		$var($Exception, ex, $new($Exception));
		$var($StringWriter, stringWriter, $new($StringWriter));
		$var($PrintWriter, printWriter, $new($PrintWriter, static_cast<$Writer*>(stringWriter)));
		ex->printStackTrace(printWriter);
		$var($String, traceString, $nc($(stringWriter->getBuffer()))->toString());
		bool var$0 = $nc(traceString)->lastIndexOf("windowDeactivated"_s) > 0;
		if (var$0 || $nc(traceString)->lastIndexOf("menuSelectionChanged"_s) > 0) {
			return;
		}
	}
	$JPopupMenu::setVisible(state);
}

SetInvokerJPopupMenuTest$MyPopupMenu::SetInvokerJPopupMenuTest$MyPopupMenu() {
}

$Class* SetInvokerJPopupMenuTest$MyPopupMenu::load$($String* name, bool initialize) {
	$loadClass(SetInvokerJPopupMenuTest$MyPopupMenu, name, initialize, &_SetInvokerJPopupMenuTest$MyPopupMenu_ClassInfo_, allocate$SetInvokerJPopupMenuTest$MyPopupMenu);
	return class$;
}

$Class* SetInvokerJPopupMenuTest$MyPopupMenu::class$ = nullptr;