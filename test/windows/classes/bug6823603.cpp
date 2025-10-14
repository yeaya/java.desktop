#include <bug6823603.h>

#include <bug6823603$1.h>
#include <bug6823603$2.h>
#include <bug6823603$3.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION
#undef TEST_ELEMENT

using $bug6823603$1 = ::bug6823603$1;
using $bug6823603$2 = ::bug6823603$2;
using $bug6823603$3 = ::bug6823603$3;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

$FieldInfo _bug6823603_FieldInfo_[] = {
	{"TEST_ELEMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6823603, TEST_ELEMENT)},
	{}
};

$MethodInfo _bug6823603_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6823603::*)()>(&bug6823603::init$))},
	{"assertEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,$ObjectArray*)>(&bug6823603::assertEquals))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6823603::main))},
	{"testGenericSignatures", "()V", "<E:Ljava/lang/Object;>()V", $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6823603::testGenericSignatures))},
	{"testGetSelectedValuesList", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6823603::testGetSelectedValuesList))},
	{"testRawSignatures", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6823603::testRawSignatures))},
	{}
};

$InnerClassInfo _bug6823603_InnerClassesInfo_[] = {
	{"bug6823603$3", nullptr, nullptr, 0},
	{"bug6823603$2", nullptr, nullptr, 0},
	{"bug6823603$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6823603_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6823603",
	"java.lang.Object",
	nullptr,
	_bug6823603_FieldInfo_,
	_bug6823603_MethodInfo_,
	nullptr,
	nullptr,
	_bug6823603_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6823603$3,bug6823603$2,bug6823603$1"
};

$Object* allocate$bug6823603($Class* clazz) {
	return $of($alloc(bug6823603));
}

$String* bug6823603::TEST_ELEMENT = nullptr;

void bug6823603::init$() {
}

void bug6823603::main($StringArray* args) {
	$init(bug6823603);
	testRawSignatures();
	testGenericSignatures();
	testGetSelectedValuesList();
}

void bug6823603::testRawSignatures() {
	$init(bug6823603);
	$var($ListModel, rawTestModel, $new($DefaultListModel));
	$new($JList);
	$new($JList, rawTestModel);
	$new($JList, $$new($ObjectArray, {$of(bug6823603::TEST_ELEMENT)}));
	$var($JList, rawTestList, $new($JList, $$new($Vector)));
	rawTestList->getPrototypeCellValue();
	rawTestList->setPrototypeCellValue(bug6823603::TEST_ELEMENT);
	rawTestList->getCellRenderer();
	rawTestList->setCellRenderer($$new($DefaultListCellRenderer));
	rawTestList->getModel();
	rawTestList->setModel(rawTestModel);
	rawTestList->setListData($$new($ObjectArray, {$of(bug6823603::TEST_ELEMENT)}));
	rawTestList->setListData($$new($Vector));
	$var($ObjectArray, selectedValues, rawTestList->getSelectedValues());
	rawTestList->getSelectedValue();
	$var($ListCellRenderer, rawTestCellRenderer, $new($DefaultListCellRenderer));
	$var($String, testEntry, "Test"_s);
	$var($JList, rawJList, $new($JList, $$new($ObjectArray, {$of(testEntry)})));
	rawTestCellRenderer->getListCellRendererComponent(rawJList, testEntry, 0, true, true);
	$var($DefaultListModel, testModel, $new($DefaultListModel));
	testModel->addElement(bug6823603::TEST_ELEMENT);
	$assign(rawTestModel, testModel);
	rawTestModel->getElementAt(0);
	$var($DefaultListModel, defaultListModel, $new($DefaultListModel));
	defaultListModel->addElement(bug6823603::TEST_ELEMENT);
	defaultListModel->getElementAt(0);
	defaultListModel->elements();
	defaultListModel->elementAt(0);
	defaultListModel->firstElement();
	defaultListModel->lastElement();
	$var($String, testElement2, "Test2"_s);
	defaultListModel->setElementAt(testElement2, 0);
	defaultListModel->insertElementAt(bug6823603::TEST_ELEMENT, 0);
	defaultListModel->get(0);
	defaultListModel->set(0, testElement2);
	defaultListModel->add(0, bug6823603::TEST_ELEMENT);
	defaultListModel->remove(0);
	$var($ListModel, abstractListModel, $new($bug6823603$1));
	$var($DefaultListCellRenderer, cellRenderer, $new($DefaultListCellRenderer));
	$var($JList, list, $new($JList, $$new($ObjectArray, {$of(testEntry)})));
	cellRenderer->getListCellRendererComponent(rawJList, testEntry, 0, true, true);
}

void bug6823603::testGenericSignatures() {
	$init(bug6823603);
	$var($ListModel, stringListModel, $new($DefaultListModel));
	$new($JList);
	$new($JList, stringListModel);
	$new($JList, $$new($StringArray, {bug6823603::TEST_ELEMENT}));
	$var($JList, stringTestList, $new($JList, $$new($Vector)));
	stringTestList->getPrototypeCellValue();
	stringTestList->setPrototypeCellValue(bug6823603::TEST_ELEMENT);
	$var($ListCellRenderer, cellRenderer, stringTestList->getCellRenderer());
	stringTestList->setCellRenderer($$new($DefaultListCellRenderer));
	$var($ListModel, model, stringTestList->getModel());
	stringTestList->setModel(stringListModel);
	stringTestList->setListData($$new($StringArray, {bug6823603::TEST_ELEMENT}));
	stringTestList->setListData($$new($Vector));
	$var($ObjectArray, selectedValues, stringTestList->getSelectedValues());
	stringTestList->getSelectedValue();
	$var($ListCellRenderer, stringTestCellRenderer, $new($DefaultListCellRenderer));
	$var($String, testEntry, "Test"_s);
	$var($JList, stringJList, $new($JList, $$new($StringArray, {testEntry})));
	$var($Component, listCellRendererComponent2, stringTestCellRenderer->getListCellRendererComponent(stringJList, testEntry, 0, true, true));
	$var($DefaultListModel, testModel, $new($DefaultListModel));
	testModel->addElement(bug6823603::TEST_ELEMENT);
	$assign(stringListModel, testModel);
	$var($String, element1, $cast($String, stringListModel->getElementAt(0)));
	$var($DefaultListModel, stringTestModel, $new($DefaultListModel));
	stringTestModel->addElement(bug6823603::TEST_ELEMENT);
	$assign(element1, $cast($String, stringTestModel->getElementAt(0)));
	$var($Enumeration, elements, stringTestModel->elements());
	$var($String, element2, $cast($String, stringTestModel->elementAt(0)));
	$var($String, firstElement, $cast($String, stringTestModel->firstElement()));
	$var($String, lastElement, $cast($String, stringTestModel->lastElement()));
	$var($String, testElement2, "Test2"_s);
	stringTestModel->setElementAt(testElement2, 0);
	stringTestModel->insertElementAt(bug6823603::TEST_ELEMENT, 0);
	$var($String, element3, $cast($String, stringTestModel->get(0)));
	$var($String, element4, $cast($String, stringTestModel->set(0, testElement2)));
	stringTestModel->add(0, bug6823603::TEST_ELEMENT);
	$var($String, removedElement, $cast($String, stringTestModel->remove(0)));
	$assign(stringListModel, $new($bug6823603$2));
	$var($ListModel, genericTestModel, $new($bug6823603$3));
	$assign(cellRenderer, $new($DefaultListCellRenderer));
	$assign(stringJList, $new($JList, $$new($StringArray, {testEntry})));
	$assign(listCellRendererComponent2, cellRenderer->getListCellRendererComponent(stringJList, testEntry, 0, true, true));
}

void bug6823603::testGetSelectedValuesList() {
	$init(bug6823603);
	$var($Vector, data, $new($Vector));
	for (int32_t i = 0; i < 10; ++i) {
		data->add($($Integer::valueOf(i)));
	}
	$var($JList, list, $new($JList, data));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	list->setSelectedIndices($$new($ints, {
		1,
		2,
		3,
		5,
		6,
		8
	}));
	$var($ObjectArray, expectedSelectedValues, list->getSelectedValues());
	$var($List, selectedValuesList, list->getSelectedValuesList());
	assertEquals(expectedSelectedValues, $($nc(selectedValuesList)->toArray()));
}

void bug6823603::assertEquals($ObjectArray* expectedArray, $ObjectArray* actualArray) {
	$init(bug6823603);
	if (!$Arrays::equals(expectedArray, actualArray)) {
		$var($String, var$0, $$str({"Expected: "_s, $($Arrays::toString(expectedArray)), " but was: "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $($Arrays::toString(actualArray))));
	}
}

bug6823603::bug6823603() {
}

void clinit$bug6823603($Class* class$) {
	$assignStatic(bug6823603::TEST_ELEMENT, "Test1"_s);
}

$Class* bug6823603::load$($String* name, bool initialize) {
	$loadClass(bug6823603, name, initialize, &_bug6823603_ClassInfo_, clinit$bug6823603, allocate$bug6823603);
	return class$;
}

$Class* bug6823603::class$ = nullptr;