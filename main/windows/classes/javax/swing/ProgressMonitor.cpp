#include <javax/swing/ProgressMonitor.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/ProgressMonitor$AccessibleProgressMonitor.h>
#include <javax/swing/ProgressMonitor$ProgressOptionPane.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef CLOSED_OPTION
#undef T

using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JDialog = ::javax::swing::JDialog;
using $JLabel = ::javax::swing::JLabel;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JProgressBar = ::javax::swing::JProgressBar;
using $ProgressMonitor$AccessibleProgressMonitor = ::javax::swing::ProgressMonitor$AccessibleProgressMonitor;
using $ProgressMonitor$ProgressOptionPane = ::javax::swing::ProgressMonitor$ProgressOptionPane;
using $UIManager = ::javax::swing::UIManager;

namespace javax {
	namespace swing {

$FieldInfo _ProgressMonitor_FieldInfo_[] = {
	{"root", "Ljavax/swing/ProgressMonitor;", nullptr, $PRIVATE, $field(ProgressMonitor, root)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(ProgressMonitor, dialog)},
	{"pane", "Ljavax/swing/JOptionPane;", nullptr, $PRIVATE, $field(ProgressMonitor, pane)},
	{"myBar", "Ljavax/swing/JProgressBar;", nullptr, $PRIVATE, $field(ProgressMonitor, myBar)},
	{"noteLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ProgressMonitor, noteLabel)},
	{"parentComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(ProgressMonitor, parentComponent)},
	{"note", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProgressMonitor, note)},
	{"cancelOption", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ProgressMonitor, cancelOption)},
	{"message", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ProgressMonitor, message)},
	{"T0", "J", nullptr, $PRIVATE, $field(ProgressMonitor, T0)},
	{"millisToDecideToPopup", "I", nullptr, $PRIVATE, $field(ProgressMonitor, millisToDecideToPopup)},
	{"millisToPopup", "I", nullptr, $PRIVATE, $field(ProgressMonitor, millisToPopup)},
	{"min", "I", nullptr, $PRIVATE, $field(ProgressMonitor, min)},
	{"max", "I", nullptr, $PRIVATE, $field(ProgressMonitor, max)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(ProgressMonitor, accessibleContext)},
	{"accessibleJOptionPane", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(ProgressMonitor, accessibleJOptionPane)},
	{}
};

$MethodInfo _ProgressMonitor_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(ProgressMonitor::*)($Component*,Object$*,$String*,int32_t,int32_t)>(&ProgressMonitor::init$))},
	{"<init>", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/ProgressMonitor;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressMonitor::*)($Component*,Object$*,$String*,int32_t,int32_t,ProgressMonitor*)>(&ProgressMonitor::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMillisToDecideToPopup", "()I", nullptr, $PUBLIC},
	{"getMillisToPopup", "()I", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getNote", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isCanceled", "()Z", nullptr, $PUBLIC},
	{"setMaximum", "(I)V", nullptr, $PUBLIC},
	{"setMillisToDecideToPopup", "(I)V", nullptr, $PUBLIC},
	{"setMillisToPopup", "(I)V", nullptr, $PUBLIC},
	{"setMinimum", "(I)V", nullptr, $PUBLIC},
	{"setNote", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setProgress", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProgressMonitor_InnerClassesInfo_[] = {
	{"javax.swing.ProgressMonitor$AccessibleProgressMonitor", "javax.swing.ProgressMonitor", "AccessibleProgressMonitor", $PROTECTED},
	{"javax.swing.ProgressMonitor$ProgressOptionPane", "javax.swing.ProgressMonitor", "ProgressOptionPane", $PRIVATE},
	{}
};

$ClassInfo _ProgressMonitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ProgressMonitor",
	"java.lang.Object",
	"javax.accessibility.Accessible",
	_ProgressMonitor_FieldInfo_,
	_ProgressMonitor_MethodInfo_,
	nullptr,
	nullptr,
	_ProgressMonitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.ProgressMonitor$AccessibleProgressMonitor,javax.swing.ProgressMonitor$ProgressOptionPane,javax.swing.ProgressMonitor$ProgressOptionPane$2,javax.swing.ProgressMonitor$ProgressOptionPane$1"
};

$Object* allocate$ProgressMonitor($Class* clazz) {
	return $of($alloc(ProgressMonitor));
}

void ProgressMonitor::init$($Component* parentComponent, Object$* message, $String* note, int32_t min, int32_t max) {
	ProgressMonitor::init$(parentComponent, message, note, min, max, nullptr);
}

void ProgressMonitor::init$($Component* parentComponent, Object$* message, $String* note, int32_t min, int32_t max, ProgressMonitor* group) {
	$set(this, cancelOption, nullptr);
	this->millisToDecideToPopup = 500;
	this->millisToPopup = 2000;
	$set(this, accessibleContext, nullptr);
	$set(this, accessibleJOptionPane, nullptr);
	this->min = min;
	this->max = max;
	$set(this, parentComponent, parentComponent);
	$set(this, cancelOption, $new($ObjectArray, 1));
	$nc(this->cancelOption)->set(0, $($UIManager::getString("OptionPane.cancelButtonText"_s)));
	$set(this, message, message);
	$set(this, note, note);
	if (group != nullptr) {
		$set(this, root, (group->root != nullptr) ? group->root : group);
		this->T0 = $nc(this->root)->T0;
		$set(this, dialog, $nc(this->root)->dialog);
	} else {
		this->T0 = $System::currentTimeMillis();
	}
}

void ProgressMonitor::setProgress(int32_t nv) {
	$useLocalCurrentObjectStackCache();
	if (nv >= this->max) {
		close();
	} else if (this->myBar != nullptr) {
		$nc(this->myBar)->setValue(nv);
	} else {
		int64_t T = $System::currentTimeMillis();
		int64_t dT = (int32_t)(T - this->T0);
		if (dT >= this->millisToDecideToPopup) {
			int32_t predictedCompletionTime = 0;
			if (nv > this->min) {
				predictedCompletionTime = (int32_t)($div(dT * (this->max - this->min), (nv - this->min)));
			} else {
				predictedCompletionTime = this->millisToPopup;
			}
			if (predictedCompletionTime >= this->millisToPopup) {
				$set(this, myBar, $new($JProgressBar));
				$nc(this->myBar)->setMinimum(this->min);
				$nc(this->myBar)->setMaximum(this->max);
				$nc(this->myBar)->setValue(nv);
				if (this->note != nullptr) {
					$set(this, noteLabel, $new($JLabel, this->note));
				}
				$set(this, pane, $new($ProgressMonitor$ProgressOptionPane, this, $$new($ObjectArray, {
					this->message,
					$of(this->noteLabel),
					$of(this->myBar)
				})));
				$set(this, dialog, $nc(this->pane)->createDialog(this->parentComponent, $($UIManager::getString("ProgressMonitor.progressText"_s))));
				$nc(this->dialog)->show();
			}
		}
	}
}

void ProgressMonitor::close() {
	if (this->dialog != nullptr) {
		$nc(this->dialog)->setVisible(false);
		$nc(this->dialog)->dispose();
		$set(this, dialog, nullptr);
		$set(this, pane, nullptr);
		$set(this, myBar, nullptr);
	}
}

int32_t ProgressMonitor::getMinimum() {
	return this->min;
}

void ProgressMonitor::setMinimum(int32_t m) {
	if (this->myBar != nullptr) {
		$nc(this->myBar)->setMinimum(m);
	}
	this->min = m;
}

int32_t ProgressMonitor::getMaximum() {
	return this->max;
}

void ProgressMonitor::setMaximum(int32_t m) {
	if (this->myBar != nullptr) {
		$nc(this->myBar)->setMaximum(m);
	}
	this->max = m;
}

bool ProgressMonitor::isCanceled() {
	$useLocalCurrentObjectStackCache();
	if (this->pane == nullptr) {
		return false;
	}
	$var($Object, v, $nc(this->pane)->getValue());
	if (v == nullptr) {
		return false;
	}
	bool var$0 = (($nc(this->cancelOption)->length == 1) && $nc($of(v))->equals($nc(this->cancelOption)->get(0)));
	return (var$0 || $nc($of(v))->equals($($Integer::valueOf($JOptionPane::CLOSED_OPTION))));
}

void ProgressMonitor::setMillisToDecideToPopup(int32_t millisToDecideToPopup) {
	this->millisToDecideToPopup = millisToDecideToPopup;
}

int32_t ProgressMonitor::getMillisToDecideToPopup() {
	return this->millisToDecideToPopup;
}

void ProgressMonitor::setMillisToPopup(int32_t millisToPopup) {
	this->millisToPopup = millisToPopup;
}

int32_t ProgressMonitor::getMillisToPopup() {
	return this->millisToPopup;
}

void ProgressMonitor::setNote($String* note) {
	$set(this, note, note);
	if (this->noteLabel != nullptr) {
		$nc(this->noteLabel)->setText(note);
	}
}

$String* ProgressMonitor::getNote() {
	return this->note;
}

$AccessibleContext* ProgressMonitor::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($ProgressMonitor$AccessibleProgressMonitor, this));
	}
	if (this->pane != nullptr && this->accessibleJOptionPane == nullptr) {
		if ($instanceOf($ProgressMonitor$AccessibleProgressMonitor, this->accessibleContext)) {
			$nc(($cast($ProgressMonitor$AccessibleProgressMonitor, this->accessibleContext)))->optionPaneCreated();
		}
	}
	return this->accessibleContext;
}

ProgressMonitor::ProgressMonitor() {
}

$Class* ProgressMonitor::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitor, name, initialize, &_ProgressMonitor_ClassInfo_, allocate$ProgressMonitor);
	return class$;
}

$Class* ProgressMonitor::class$ = nullptr;

	} // swing
} // javax