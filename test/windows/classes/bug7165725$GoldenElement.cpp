#include <bug7165725$GoldenElement.h>

#include <bug7165725.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $bug7165725$GoldenElementArray = $Array<bug7165725$GoldenElement>;
using $bug7165725 = ::bug7165725;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $Element = ::javax::swing::text::Element;

$FieldInfo _bug7165725$GoldenElement_FieldInfo_[] = {
	{"goldenName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(bug7165725$GoldenElement, goldenName)},
	{"goldenChildren", "Ljava/util/List;", "Ljava/util/List<Lbug7165725$GoldenElement;>;", $PRIVATE, $field(bug7165725$GoldenElement, goldenChildren)},
	{}
};

$MethodInfo _bug7165725$GoldenElement_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Lbug7165725$GoldenElement;)V", nullptr, $TRANSIENT, $method(static_cast<void(bug7165725$GoldenElement::*)($String*,$bug7165725$GoldenElementArray*)>(&bug7165725$GoldenElement::init$))},
	{"checkStructureEquivalence", "(Ljavax/swing/text/AbstractDocument$AbstractElement;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug7165725$GoldenElement_InnerClassesInfo_[] = {
	{"bug7165725$GoldenElement", "bug7165725", "GoldenElement", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug7165725$GoldenElement_ClassInfo_ = {
	$ACC_SUPER,
	"bug7165725$GoldenElement",
	"java.lang.Object",
	nullptr,
	_bug7165725$GoldenElement_FieldInfo_,
	_bug7165725$GoldenElement_MethodInfo_,
	nullptr,
	nullptr,
	_bug7165725$GoldenElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7165725"
};

$Object* allocate$bug7165725$GoldenElement($Class* clazz) {
	return $of($alloc(bug7165725$GoldenElement));
}

void bug7165725$GoldenElement::init$($String* goldenName, $bug7165725$GoldenElementArray* goldenChildren) {
	$set(this, goldenName, goldenName);
	if (goldenChildren != nullptr) {
		$set(this, goldenChildren, $Arrays::asList(goldenChildren));
	} else {
		$set(this, goldenChildren, $new($ArrayList));
	}
}

void bug7165725$GoldenElement::checkStructureEquivalence($AbstractDocument$AbstractElement* elem) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(elem)->getName());
	if (!$nc(this->goldenName)->equals(name)) {
		$throwNew($RuntimeException, $$str({"Bad structure: expected element name is \'"_s, this->goldenName, "\' but the actual name was \'"_s, name, "\'."_s}));
	}
	int32_t goldenChildCount = $nc(this->goldenChildren)->size();
	int32_t childCount = elem->getChildCount();
	if (childCount != goldenChildCount) {
		$nc($System::out)->print("D: children: "_s);
		for (int32_t i = 0; i < childCount; ++i) {
			$nc($System::out)->print($$str({" "_s, $($nc($(elem->getElement(i)))->getName())}));
		}
		$nc($System::out)->println(""_s);
		$nc($System::out)->print("D: goldenChildren: "_s);
		{
			$var($Iterator, i$, $nc(this->goldenChildren)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(bug7165725$GoldenElement, ge, $cast(bug7165725$GoldenElement, i$->next()));
				{
					$nc($System::out)->print($$str({" "_s, $nc(ge)->goldenName}));
				}
			}
		}
		$nc($System::out)->println(""_s);
		$throwNew($RuntimeException, $$str({"Bad structure: expected child count of element \'"_s, this->goldenName, "\' is \'"_s, $$str(goldenChildCount), "\' but the actual count was \'"_s, $$str(childCount), "\'."_s}));
	}
	for (int32_t i = 0; i < childCount; ++i) {
		$var($AbstractDocument$AbstractElement, nextElem, $cast($AbstractDocument$AbstractElement, elem->getElement(i)));
		$var(bug7165725$GoldenElement, goldenElement, $cast(bug7165725$GoldenElement, $nc(this->goldenChildren)->get(i)));
		$nc(goldenElement)->checkStructureEquivalence(nextElem);
	}
}

bug7165725$GoldenElement::bug7165725$GoldenElement() {
}

$Class* bug7165725$GoldenElement::load$($String* name, bool initialize) {
	$loadClass(bug7165725$GoldenElement, name, initialize, &_bug7165725$GoldenElement_ClassInfo_, allocate$bug7165725$GoldenElement);
	return class$;
}

$Class* bug7165725$GoldenElement::class$ = nullptr;