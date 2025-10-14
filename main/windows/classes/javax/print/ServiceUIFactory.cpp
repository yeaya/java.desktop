#include <javax/print/ServiceUIFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ABOUT_UIROLE
#undef ADMIN_UIROLE
#undef DIALOG_UI
#undef JCOMPONENT_UI
#undef JDIALOG_UI
#undef MAIN_UIROLE
#undef PANEL_UI
#undef RESERVED_UIROLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$FieldInfo _ServiceUIFactory_FieldInfo_[] = {
	{"JCOMPONENT_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, JCOMPONENT_UI)},
	{"PANEL_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, PANEL_UI)},
	{"DIALOG_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, DIALOG_UI)},
	{"JDIALOG_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, JDIALOG_UI)},
	{"ABOUT_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, ABOUT_UIROLE)},
	{"ADMIN_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, ADMIN_UIROLE)},
	{"MAIN_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, MAIN_UIROLE)},
	{"RESERVED_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, RESERVED_UIROLE)},
	{}
};

$MethodInfo _ServiceUIFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ServiceUIFactory::*)()>(&ServiceUIFactory::init$))},
	{"getUI", "(ILjava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUIClassNamesForRole", "(I)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ServiceUIFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.ServiceUIFactory",
	"java.lang.Object",
	nullptr,
	_ServiceUIFactory_FieldInfo_,
	_ServiceUIFactory_MethodInfo_
};

$Object* allocate$ServiceUIFactory($Class* clazz) {
	return $of($alloc(ServiceUIFactory));
}


$String* ServiceUIFactory::JCOMPONENT_UI = nullptr;

$String* ServiceUIFactory::PANEL_UI = nullptr;

$String* ServiceUIFactory::DIALOG_UI = nullptr;

$String* ServiceUIFactory::JDIALOG_UI = nullptr;

void ServiceUIFactory::init$() {
}

ServiceUIFactory::ServiceUIFactory() {
}

void clinit$ServiceUIFactory($Class* class$) {
	$assignStatic(ServiceUIFactory::JCOMPONENT_UI, "javax.swing.JComponent"_s);
	$assignStatic(ServiceUIFactory::PANEL_UI, "java.awt.Panel"_s);
	$assignStatic(ServiceUIFactory::DIALOG_UI, "java.awt.Dialog"_s);
	$assignStatic(ServiceUIFactory::JDIALOG_UI, "javax.swing.JDialog"_s);
}

$Class* ServiceUIFactory::load$($String* name, bool initialize) {
	$loadClass(ServiceUIFactory, name, initialize, &_ServiceUIFactory_ClassInfo_, clinit$ServiceUIFactory, allocate$ServiceUIFactory);
	return class$;
}

$Class* ServiceUIFactory::class$ = nullptr;

	} // print
} // javax