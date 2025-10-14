#include <sun/print/ServiceDialog$ValidatingFileChooser.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef WARNING_MESSAGE
#undef YES_NO_OPTION
#undef YES_OPTION

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$ValidatingFileChooser_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$ValidatingFileChooser, this$0)},
	{}
};

$MethodInfo _ServiceDialog$ValidatingFileChooser_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PRIVATE, $method(static_cast<void(ServiceDialog$ValidatingFileChooser::*)($ServiceDialog*)>(&ServiceDialog$ValidatingFileChooser::init$))},
	{"approveSelection", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$ValidatingFileChooser_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$ValidatingFileChooser", "sun.print.ServiceDialog", "ValidatingFileChooser", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$ValidatingFileChooser_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$ValidatingFileChooser",
	"javax.swing.JFileChooser",
	nullptr,
	_ServiceDialog$ValidatingFileChooser_FieldInfo_,
	_ServiceDialog$ValidatingFileChooser_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$ValidatingFileChooser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$ValidatingFileChooser($Class* clazz) {
	return $of($alloc(ServiceDialog$ValidatingFileChooser));
}

void ServiceDialog$ValidatingFileChooser::init$($ServiceDialog* this$0) {
	$set(this, this$0, this$0);
	$JFileChooser::init$();
}

void ServiceDialog$ValidatingFileChooser::approveSelection() {
	$var($File, selected, getSelectedFile());
	bool exists = false;
	try {
		exists = $nc(selected)->exists();
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		exists = false;
	}
	if (exists) {
		int32_t val = 0;
		$var($Object, var$0, $of($ServiceDialog::getMsg("dialog.overwrite"_s)));
		val = $JOptionPane::showConfirmDialog(this, var$0, $($ServiceDialog::getMsg("dialog.owtitle"_s)), $JOptionPane::YES_NO_OPTION);
		if (val != $JOptionPane::YES_OPTION) {
			return;
		}
	}
	try {
		if ($nc(selected)->createNewFile()) {
			selected->delete$();
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$var($Object, var$1, $of($str({$($ServiceDialog::getMsg("dialog.writeerror"_s)), " "_s, selected})));
		$JOptionPane::showMessageDialog(this, var$1, $($ServiceDialog::getMsg("dialog.owtitle"_s)), $JOptionPane::WARNING_MESSAGE);
		return;
	} catch ($SecurityException&) {
		$catch();
	}
	$var($File, pFile, $nc(selected)->getParentFile());
	bool var$3 = selected->exists();
	if (var$3) {
		bool var$4 = !selected->isFile();
		var$3 = (var$4 || !selected->canWrite());
	}
	bool var$2 = (var$3);
	if (!var$2) {
		bool var$5 = (pFile != nullptr);
		if (var$5) {
			bool var$6 = !pFile->exists();
			if (!var$6) {
				bool var$7 = $nc(pFile)->exists();
				var$6 = (var$7 && !pFile->canWrite());
			}
			var$5 = (var$6);
		}
		var$2 = (var$5);
	}
	if (var$2) {
		$var($Object, var$8, $of($str({$($ServiceDialog::getMsg("dialog.writeerror"_s)), " "_s, selected})));
		$JOptionPane::showMessageDialog(this, var$8, $($ServiceDialog::getMsg("dialog.owtitle"_s)), $JOptionPane::WARNING_MESSAGE);
		return;
	}
	$JFileChooser::approveSelection();
}

ServiceDialog$ValidatingFileChooser::ServiceDialog$ValidatingFileChooser() {
}

$Class* ServiceDialog$ValidatingFileChooser::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$ValidatingFileChooser, name, initialize, &_ServiceDialog$ValidatingFileChooser_ClassInfo_, allocate$ServiceDialog$ValidatingFileChooser);
	return class$;
}

$Class* ServiceDialog$ValidatingFileChooser::class$ = nullptr;

	} // print
} // sun