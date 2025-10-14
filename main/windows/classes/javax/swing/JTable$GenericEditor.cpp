#include <javax/swing/JTable$GenericEditor.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/LineBorder.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $LineBorder = ::javax::swing::border::LineBorder;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _JTable$GenericEditor_FieldInfo_[] = {
	{"argTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", 0, $field(JTable$GenericEditor, argTypes)},
	{"constructor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", 0, $field(JTable$GenericEditor, constructor)},
	{"value", "Ljava/lang/Object;", nullptr, 0, $field(JTable$GenericEditor, value)},
	{}
};

$MethodInfo _JTable$GenericEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$GenericEditor::*)()>(&JTable$GenericEditor::init$))},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$GenericEditor_InnerClassesInfo_[] = {
	{"javax.swing.JTable$GenericEditor", "javax.swing.JTable", "GenericEditor", $STATIC},
	{}
};

$ClassInfo _JTable$GenericEditor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$GenericEditor",
	"javax.swing.DefaultCellEditor",
	nullptr,
	_JTable$GenericEditor_FieldInfo_,
	_JTable$GenericEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$GenericEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$GenericEditor($Class* clazz) {
	return $of($alloc(JTable$GenericEditor));
}

void JTable$GenericEditor::init$() {
	$DefaultCellEditor::init$($$new($JTextField));
	$load($String);
	$set(this, argTypes, $new($ClassArray, {$String::class$}));
	$nc($(getComponent()))->setName("Table.editor"_s);
}

bool JTable$GenericEditor::stopCellEditing() {
	$beforeCallerSensitive();
	$var($String, s, $cast($String, $DefaultCellEditor::getCellEditorValue()));
	try {
		if (""_s->equals(s)) {
			$load($String);
			if ($nc(this->constructor)->getDeclaringClass() == $String::class$) {
				$set(this, value, s);
			}
			return $DefaultCellEditor::stopCellEditing();
		}
		$SwingUtilities2::checkAccess($nc(this->constructor)->getModifiers());
		$set(this, value, $nc(this->constructor)->newInstance($$new($ObjectArray, {$of(s)})));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($Color);
		$nc(($cast($JComponent, $(getComponent()))))->setBorder($$new($LineBorder, $Color::red));
		return false;
	}
	return $DefaultCellEditor::stopCellEditing();
}

$Component* JTable$GenericEditor::getTableCellEditorComponent($JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) {
	$beforeCallerSensitive();
	$set(this, value, nullptr);
	$init($Color);
	$nc(($cast($JComponent, $(getComponent()))))->setBorder($$new($LineBorder, $Color::black));
	try {
		$Class* type = $nc(table)->getColumnClass(column);
		$load($Object);
		if (type == $Object::class$) {
			$load($String);
			type = $String::class$;
		}
		$ReflectUtil::checkPackageAccess(type);
		$SwingUtilities2::checkAccess($nc(type)->getModifiers());
		$set(this, constructor, $nc(type)->getConstructor(this->argTypes));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return nullptr;
	}
	return $DefaultCellEditor::getTableCellEditorComponent(table, value, isSelected, row, column);
}

$Object* JTable$GenericEditor::getCellEditorValue() {
	return $of(this->value);
}

JTable$GenericEditor::JTable$GenericEditor() {
}

$Class* JTable$GenericEditor::load$($String* name, bool initialize) {
	$loadClass(JTable$GenericEditor, name, initialize, &_JTable$GenericEditor_ClassInfo_, allocate$JTable$GenericEditor);
	return class$;
}

$Class* JTable$GenericEditor::class$ = nullptr;

	} // swing
} // javax