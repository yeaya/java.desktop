#include <bug7031551.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/MutableComboBoxModel.h>
#include <jcpp.h>

#undef TEST_ELEMENT1
#undef TEST_ELEMENT2
#undef TEST_ELEMENT3

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Vector = ::java::util::Vector;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $JComboBox = ::javax::swing::JComboBox;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $MutableComboBoxModel = ::javax::swing::MutableComboBoxModel;

$FieldInfo _bug7031551_FieldInfo_[] = {
	{"TEST_ELEMENT1", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7031551, TEST_ELEMENT1)},
	{"TEST_ELEMENT2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7031551, TEST_ELEMENT2)},
	{"TEST_ELEMENT3", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7031551, TEST_ELEMENT3)},
	{}
};

$MethodInfo _bug7031551_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7031551::*)()>(&bug7031551::init$))},
	{"assertEquals", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,Object$*)>(&bug7031551::assertEquals))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7031551::main))},
	{"testGenericSignatures", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7031551::testGenericSignatures))},
	{"testRawSignatures", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7031551::testRawSignatures))},
	{}
};

$ClassInfo _bug7031551_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7031551",
	"java.lang.Object",
	nullptr,
	_bug7031551_FieldInfo_,
	_bug7031551_MethodInfo_
};

$Object* allocate$bug7031551($Class* clazz) {
	return $of($alloc(bug7031551));
}

$String* bug7031551::TEST_ELEMENT1 = nullptr;
$String* bug7031551::TEST_ELEMENT2 = nullptr;
$String* bug7031551::TEST_ELEMENT3 = nullptr;

void bug7031551::init$() {
}

void bug7031551::main($StringArray* args) {
	$init(bug7031551);
	testRawSignatures();
	testGenericSignatures();
}

void bug7031551::testRawSignatures() {
	$init(bug7031551);
	$var($ComboBoxModel, rawTestModel, $new($DefaultComboBoxModel));
	$var($JComboBox, rawTestComboBox, $new($JComboBox));
	$assign(rawTestComboBox, $new($JComboBox, rawTestModel));
	$assign(rawTestComboBox, $new($JComboBox, $$new($ObjectArray, {$of(bug7031551::TEST_ELEMENT1)})));
	$assign(rawTestComboBox, $new($JComboBox, $$new($Vector)));
	$var($Object, unused1, rawTestComboBox->getPrototypeDisplayValue());
	rawTestComboBox->setPrototypeDisplayValue(bug7031551::TEST_ELEMENT1);
	$var($ListCellRenderer, unused2, rawTestComboBox->getRenderer());
	rawTestComboBox->setRenderer($$new($DefaultListCellRenderer));
	$var($ComboBoxModel, unused3, rawTestComboBox->getModel());
	rawTestComboBox->setModel(rawTestModel);
	rawTestComboBox->addItem(bug7031551::TEST_ELEMENT2);
	rawTestComboBox->insertItemAt(bug7031551::TEST_ELEMENT3, 1);
	rawTestComboBox->removeItem(bug7031551::TEST_ELEMENT2);
	assertEquals($(rawTestComboBox->getItemAt(0)), bug7031551::TEST_ELEMENT3);
	rawTestComboBox->removeAllItems();
	$var($DefaultComboBoxModel, testModel, $new($DefaultComboBoxModel));
	$assign(testModel, $new($DefaultComboBoxModel, $$new($Vector)));
	$assign(testModel, $new($DefaultComboBoxModel, $$new($ObjectArray, {$of(bug7031551::TEST_ELEMENT1)})));
	testModel->addElement(bug7031551::TEST_ELEMENT2);
	testModel->insertElementAt(bug7031551::TEST_ELEMENT3, 1);
	assertEquals($(testModel->getElementAt(2)), bug7031551::TEST_ELEMENT2);
}

void bug7031551::testGenericSignatures() {
	$init(bug7031551);
	$var($ComboBoxModel, stringTestModel, $new($DefaultComboBoxModel));
	$var($JComboBox, stringTestComboBox, $new($JComboBox));
	$assign(stringTestComboBox, $new($JComboBox, stringTestModel));
	$assign(stringTestComboBox, $new($JComboBox, $$new($StringArray, {bug7031551::TEST_ELEMENT1})));
	$assign(stringTestComboBox, $new($JComboBox, $$new($Vector)));
	$var($String, unused1, $cast($String, stringTestComboBox->getPrototypeDisplayValue()));
	stringTestComboBox->setPrototypeDisplayValue(bug7031551::TEST_ELEMENT1);
	$var($ListCellRenderer, unused2, stringTestComboBox->getRenderer());
	stringTestComboBox->setRenderer($$new($DefaultListCellRenderer));
	$var($ComboBoxModel, unused3, stringTestComboBox->getModel());
	stringTestComboBox->setModel(stringTestModel);
	stringTestComboBox->addItem(bug7031551::TEST_ELEMENT2);
	stringTestComboBox->insertItemAt(bug7031551::TEST_ELEMENT3, 1);
	stringTestComboBox->removeItem(bug7031551::TEST_ELEMENT2);
	assertEquals($(stringTestComboBox->getItemAt(0)), bug7031551::TEST_ELEMENT3);
	stringTestComboBox->removeAllItems();
	$var($DefaultComboBoxModel, testModel, $new($DefaultComboBoxModel));
	$assign(testModel, $new($DefaultComboBoxModel, $$new($Vector)));
	$assign(testModel, $new($DefaultComboBoxModel, $$new($StringArray, {bug7031551::TEST_ELEMENT1})));
	testModel->addElement(bug7031551::TEST_ELEMENT2);
	testModel->insertElementAt(bug7031551::TEST_ELEMENT3, 1);
	assertEquals($(testModel->getElementAt(2)), bug7031551::TEST_ELEMENT2);
}

void bug7031551::assertEquals(Object$* expectedObject, Object$* actualObject) {
	$init(bug7031551);
	if (!$nc($of(expectedObject))->equals(actualObject)) {
		$throwNew($RuntimeException, $$str({"Expected: "_s, expectedObject, " but was: "_s, actualObject}));
	}
}

bug7031551::bug7031551() {
}

void clinit$bug7031551($Class* class$) {
	$assignStatic(bug7031551::TEST_ELEMENT1, "Test1"_s);
	$assignStatic(bug7031551::TEST_ELEMENT2, "Test2"_s);
	$assignStatic(bug7031551::TEST_ELEMENT3, "Test3"_s);
}

$Class* bug7031551::load$($String* name, bool initialize) {
	$loadClass(bug7031551, name, initialize, &_bug7031551_ClassInfo_, clinit$bug7031551, allocate$bug7031551);
	return class$;
}

$Class* bug7031551::class$ = nullptr;