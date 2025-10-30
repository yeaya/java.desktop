#include <javax/swing/JSpinner$ListEditor.h>

#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner$ListEditor$ListFormatter.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/text/DefaultFormatterFactory.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JFormattedTextField$AbstractFormatterFactory = ::javax::swing::JFormattedTextField$AbstractFormatterFactory;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JSpinner$ListEditor$ListFormatter = ::javax::swing::JSpinner$ListEditor$ListFormatter;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $DefaultFormatterFactory = ::javax::swing::text::DefaultFormatterFactory;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {

$MethodInfo _JSpinner$ListEditor_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSpinner;)V", nullptr, $PUBLIC, $method(static_cast<void(JSpinner$ListEditor::*)($JSpinner*)>(&JSpinner$ListEditor::init$))},
	{"getModel", "()Ljavax/swing/SpinnerListModel;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSpinner$ListEditor_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$ListEditor", "javax.swing.JSpinner", "ListEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$DefaultEditor", "javax.swing.JSpinner", "DefaultEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$ListEditor$ListFormatter", "javax.swing.JSpinner$ListEditor", "ListFormatter", $PRIVATE},
	{}
};

$ClassInfo _JSpinner$ListEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSpinner$ListEditor",
	"javax.swing.JSpinner$DefaultEditor",
	nullptr,
	nullptr,
	_JSpinner$ListEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$ListEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$ListEditor($Class* clazz) {
	return $of($alloc(JSpinner$ListEditor));
}

void JSpinner$ListEditor::init$($JSpinner* spinner) {
	$useLocalCurrentObjectStackCache();
	$JSpinner$DefaultEditor::init$(spinner);
	if (!($instanceOf($SpinnerListModel, $($nc(spinner)->getModel())))) {
		$throwNew($IllegalArgumentException, "model not a SpinnerListModel"_s);
	}
	$nc($(getTextField()))->setEditable(true);
	$nc($(getTextField()))->setFormatterFactory($$new($DefaultFormatterFactory, $$new($JSpinner$ListEditor$ListFormatter, this)));
}

$SpinnerListModel* JSpinner$ListEditor::getModel() {
	return ($cast($SpinnerListModel, $nc($(getSpinner()))->getModel()));
}

JSpinner$ListEditor::JSpinner$ListEditor() {
}

$Class* JSpinner$ListEditor::load$($String* name, bool initialize) {
	$loadClass(JSpinner$ListEditor, name, initialize, &_JSpinner$ListEditor_ClassInfo_, allocate$JSpinner$ListEditor);
	return class$;
}

$Class* JSpinner$ListEditor::class$ = nullptr;

	} // swing
} // javax