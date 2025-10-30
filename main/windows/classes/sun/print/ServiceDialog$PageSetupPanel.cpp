#include <sun/print/ServiceDialog$PageSetupPanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <sun/print/ServiceDialog$MarginsPanel.h>
#include <sun/print/ServiceDialog$MediaPanel.h>
#include <sun/print/ServiceDialog$OrientationPanel.h>
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
using $ServiceDialog$MarginsPanel = ::sun::print::ServiceDialog$MarginsPanel;
using $ServiceDialog$MediaPanel = ::sun::print::ServiceDialog$MediaPanel;
using $ServiceDialog$OrientationPanel = ::sun::print::ServiceDialog$OrientationPanel;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$PageSetupPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$PageSetupPanel, this$0)},
	{"pnlMedia", "Lsun/print/ServiceDialog$MediaPanel;", nullptr, $PRIVATE, $field(ServiceDialog$PageSetupPanel, pnlMedia)},
	{"pnlOrientation", "Lsun/print/ServiceDialog$OrientationPanel;", nullptr, $PRIVATE, $field(ServiceDialog$PageSetupPanel, pnlOrientation)},
	{"pnlMargins", "Lsun/print/ServiceDialog$MarginsPanel;", nullptr, $PRIVATE, $field(ServiceDialog$PageSetupPanel, pnlMargins)},
	{}
};

$MethodInfo _ServiceDialog$PageSetupPanel_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$PageSetupPanel::*)($ServiceDialog*)>(&ServiceDialog$PageSetupPanel::init$))},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$PageSetupPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$PageSetupPanel", "sun.print.ServiceDialog", "PageSetupPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$PageSetupPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$PageSetupPanel",
	"javax.swing.JPanel",
	nullptr,
	_ServiceDialog$PageSetupPanel_FieldInfo_,
	_ServiceDialog$PageSetupPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$PageSetupPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$PageSetupPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$PageSetupPanel));
}

void ServiceDialog$PageSetupPanel::init$($ServiceDialog* this$0) {
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
	$set(this, pnlMedia, $new($ServiceDialog$MediaPanel, this$0));
	$ServiceDialog::addToGB(this->pnlMedia, this, gridbag, c);
	$set(this, pnlOrientation, $new($ServiceDialog$OrientationPanel, this$0));
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$ServiceDialog::addToGB(this->pnlOrientation, this, gridbag, c);
	$set(this, pnlMargins, $new($ServiceDialog$MarginsPanel, this$0));
	$nc(this->pnlOrientation)->addOrientationListener(this->pnlMargins);
	$nc(this->pnlMedia)->addMediaListener(this->pnlMargins);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$ServiceDialog::addToGB(this->pnlMargins, this, gridbag, c);
}

void ServiceDialog$PageSetupPanel::updateInfo() {
	$nc(this->pnlMedia)->updateInfo();
	$nc(this->pnlOrientation)->updateInfo();
	$nc(this->pnlMargins)->updateInfo();
}

ServiceDialog$PageSetupPanel::ServiceDialog$PageSetupPanel() {
}

$Class* ServiceDialog$PageSetupPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$PageSetupPanel, name, initialize, &_ServiceDialog$PageSetupPanel_ClassInfo_, allocate$ServiceDialog$PageSetupPanel);
	return class$;
}

$Class* ServiceDialog$PageSetupPanel::class$ = nullptr;

	} // print
} // sun