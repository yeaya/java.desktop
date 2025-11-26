#include <javax/swing/text/StyleContext$KeyBuilder.h>

#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleContext$SmallAttributeSet.h>
#include <javax/swing/text/StyleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyleContext$SmallAttributeSet = ::javax::swing::text::StyleContext$SmallAttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyleContext$KeyBuilder_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StyleContext;", nullptr, $FINAL | $SYNTHETIC, $field(StyleContext$KeyBuilder, this$0)},
	{"keys", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE, $field(StyleContext$KeyBuilder, keys)},
	{"data", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE, $field(StyleContext$KeyBuilder, data)},
	{}
};

$MethodInfo _StyleContext$KeyBuilder_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StyleContext;)V", nullptr, 0, $method(static_cast<void(StyleContext$KeyBuilder::*)($StyleContext*)>(&StyleContext$KeyBuilder::init$))},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"createTable", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getCount", "()I", nullptr, 0},
	{"initialize", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"initialize", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleContext$KeyBuilder::*)($ObjectArray*)>(&StyleContext$KeyBuilder::initialize))},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"removeSearchAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleContext$KeyBuilder::*)(Object$*,Object$*)>(&StyleContext$KeyBuilder::removeSearchAttribute))},
	{}
};

$InnerClassInfo _StyleContext$KeyBuilder_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleContext$KeyBuilder", "javax.swing.text.StyleContext", "KeyBuilder", 0},
	{}
};

$ClassInfo _StyleContext$KeyBuilder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StyleContext$KeyBuilder",
	"java.lang.Object",
	nullptr,
	_StyleContext$KeyBuilder_FieldInfo_,
	_StyleContext$KeyBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_StyleContext$KeyBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleContext"
};

$Object* allocate$StyleContext$KeyBuilder($Class* clazz) {
	return $of($alloc(StyleContext$KeyBuilder));
}

void StyleContext$KeyBuilder::init$($StyleContext* this$0) {
	$set(this, this$0, this$0);
	$set(this, keys, $new($Vector));
	$set(this, data, $new($Vector));
}

void StyleContext$KeyBuilder::initialize($AttributeSet* a) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($StyleContext$SmallAttributeSet, a)) {
		initialize($nc(($cast($StyleContext$SmallAttributeSet, a)))->attributes);
	} else {
		$nc(this->keys)->removeAllElements();
		$nc(this->data)->removeAllElements();
		$var($Enumeration, names, $nc(a)->getAttributeNames());
		while ($nc(names)->hasMoreElements()) {
			$var($Object, name, names->nextElement());
			addAttribute(name, $(a->getAttribute(name)));
		}
	}
}

void StyleContext$KeyBuilder::initialize($ObjectArray* sorted) {
	$nc(this->keys)->removeAllElements();
	$nc(this->data)->removeAllElements();
	int32_t n = $nc(sorted)->length;
	for (int32_t i = 0; i < n; i += 2) {
		$nc(this->keys)->addElement(sorted->get(i));
		$nc(this->data)->addElement(sorted->get(i + 1));
	}
}

$ObjectArray* StyleContext$KeyBuilder::createTable() {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(this->keys)->size();
	$var($ObjectArray, tbl, $new($ObjectArray, 2 * n));
	for (int32_t i = 0; i < n; ++i) {
		int32_t offs = 2 * i;
		tbl->set(offs, $($nc(this->keys)->elementAt(i)));
		tbl->set(offs + 1, $($nc(this->data)->elementAt(i)));
	}
	return tbl;
}

int32_t StyleContext$KeyBuilder::getCount() {
	return $nc(this->keys)->size();
}

void StyleContext$KeyBuilder::addAttribute(Object$* key, Object$* value) {
	$nc(this->keys)->addElement(key);
	$nc(this->data)->addElement(value);
}

void StyleContext$KeyBuilder::addAttributes($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($StyleContext$SmallAttributeSet, attr)) {
		$var($ObjectArray, tbl, $nc(($cast($StyleContext$SmallAttributeSet, attr)))->attributes);
		int32_t n = $nc(tbl)->length;
		for (int32_t i = 0; i < n; i += 2) {
			addAttribute(tbl->get(i), tbl->get(i + 1));
		}
	} else {
		$var($Enumeration, names, $nc(attr)->getAttributeNames());
		while ($nc(names)->hasMoreElements()) {
			$var($Object, name, names->nextElement());
			addAttribute(name, $(attr->getAttribute(name)));
		}
	}
}

void StyleContext$KeyBuilder::removeAttribute(Object$* key) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(this->keys)->size();
	for (int32_t i = 0; i < n; ++i) {
		if ($nc($of($($nc(this->keys)->elementAt(i))))->equals(key)) {
			$nc(this->keys)->removeElementAt(i);
			$nc(this->data)->removeElementAt(i);
			return;
		}
	}
}

void StyleContext$KeyBuilder::removeAttributes($Enumeration* names) {
	$useLocalCurrentObjectStackCache();
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		removeAttribute(name);
	}
}

void StyleContext$KeyBuilder::removeAttributes($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, names, $nc(attr)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		$var($Object, value, attr->getAttribute(name));
		removeSearchAttribute(name, value);
	}
}

void StyleContext$KeyBuilder::removeSearchAttribute(Object$* ikey, Object$* value) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(this->keys)->size();
	for (int32_t i = 0; i < n; ++i) {
		if ($nc($of($($nc(this->keys)->elementAt(i))))->equals(ikey)) {
			if ($nc($of($($nc(this->data)->elementAt(i))))->equals(value)) {
				$nc(this->keys)->removeElementAt(i);
				$nc(this->data)->removeElementAt(i);
			}
			return;
		}
	}
}

StyleContext$KeyBuilder::StyleContext$KeyBuilder() {
}

$Class* StyleContext$KeyBuilder::load$($String* name, bool initialize) {
	$loadClass(StyleContext$KeyBuilder, name, initialize, &_StyleContext$KeyBuilder_ClassInfo_, allocate$StyleContext$KeyBuilder);
	return class$;
}

$Class* StyleContext$KeyBuilder::class$ = nullptr;

		} // text
	} // swing
} // javax