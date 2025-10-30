#include <sun/print/ServiceDialog$GeneralPanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <sun/print/ServiceDialog$CopiesPanel.h>
#include <sun/print/ServiceDialog$PrintRangePanel.h>
#include <sun/print/ServiceDialog$PrintServicePanel.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef BOTH
#undef RELATIVE
#undef REMAINDER

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$CopiesPanel = ::sun::print::ServiceDialog$CopiesPanel;
using $ServiceDialog$PrintRangePanel = ::sun::print::ServiceDialog$PrintRangePanel;
using $ServiceDialog$PrintServicePanel = ::sun::print::ServiceDialog$PrintServicePanel;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$GeneralPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$GeneralPanel, this$0)},
	{"pnlPrintService", "Lsun/print/ServiceDialog$PrintServicePanel;", nullptr, $PRIVATE, $field(ServiceDialog$GeneralPanel, pnlPrintService)},
	{"pnlPrintRange", "Lsun/print/ServiceDialog$PrintRangePanel;", nullptr, $PRIVATE, $field(ServiceDialog$GeneralPanel, pnlPrintRange)},
	{"pnlCopies", "Lsun/print/ServiceDialog$CopiesPanel;", nullptr, $PRIVATE, $field(ServiceDialog$GeneralPanel, pnlCopies)},
	{}
};

$MethodInfo _ServiceDialog$GeneralPanel_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$GeneralPanel::*)($ServiceDialog*)>(&ServiceDialog$GeneralPanel::init$))},
	{"isPrintToFileRequested", "()Z", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$GeneralPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$GeneralPanel", "sun.print.ServiceDialog", "GeneralPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$GeneralPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$GeneralPanel",
	"javax.swing.JPanel",
	nullptr,
	_ServiceDialog$GeneralPanel_FieldInfo_,
	_ServiceDialog$GeneralPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$GeneralPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$GeneralPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$GeneralPanel));
}

void ServiceDialog$GeneralPanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	c->fill = $GridBagConstraints::BOTH;
	$init($ServiceDialog);
	$set(c, insets, $ServiceDialog::panelInsets);
	c->weightx = 1.0;
	c->weighty = 1.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, pnlPrintService, $new($ServiceDialog$PrintServicePanel, this$0));
	$ServiceDialog::addToGB(this->pnlPrintService, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$set(this, pnlPrintRange, $new($ServiceDialog$PrintRangePanel, this$0));
	$ServiceDialog::addToGB(this->pnlPrintRange, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, pnlCopies, $new($ServiceDialog$CopiesPanel, this$0));
	$ServiceDialog::addToGB(this->pnlCopies, this, gridbag, c);
}

bool ServiceDialog$GeneralPanel::isPrintToFileRequested() {
	return ($nc(this->pnlPrintService)->isPrintToFileSelected());
}

void ServiceDialog$GeneralPanel::updateInfo() {
	$nc(this->pnlPrintService)->updateInfo();
	$nc(this->pnlPrintRange)->updateInfo();
	$nc(this->pnlCopies)->updateInfo();
}

ServiceDialog$GeneralPanel::ServiceDialog$GeneralPanel() {
}

$Class* ServiceDialog$GeneralPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$GeneralPanel, name, initialize, &_ServiceDialog$GeneralPanel_ClassInfo_, allocate$ServiceDialog$GeneralPanel);
	return class$;
}

$Class* ServiceDialog$GeneralPanel::class$ = nullptr;

	} // print
} // sun