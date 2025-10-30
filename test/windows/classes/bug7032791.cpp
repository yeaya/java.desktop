#include <bug7032791.h>

#include <java/awt/Component.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

$MethodInfo _bug7032791_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7032791::*)()>(&bug7032791::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7032791::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug7032791_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7032791",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug7032791_MethodInfo_
};

$Object* allocate$bug7032791($Class* clazz) {
	return $of($alloc(bug7032791));
}

void bug7032791::init$() {
}

void bug7032791::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($SynthLookAndFeel)));
	$var($Object, value, "Test value"_s);
	$var($JTable, table, $new($JTable, 1, 1));
	$var($TableCellRenderer, renderer, table->getDefaultRenderer($Object::class$));
	$nc(renderer)->getTableCellRendererComponent(nullptr, value, true, true, 0, 0);
	$nc($System::out)->println("OK"_s);
}

bug7032791::bug7032791() {
}

$Class* bug7032791::load$($String* name, bool initialize) {
	$loadClass(bug7032791, name, initialize, &_bug7032791_ClassInfo_, allocate$bug7032791);
	return class$;
}

$Class* bug7032791::class$ = nullptr;