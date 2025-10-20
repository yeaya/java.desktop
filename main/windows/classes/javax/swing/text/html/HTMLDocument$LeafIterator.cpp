#include <javax/swing/text/html/HTMLDocument$LeafIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$Iterator.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$Iterator = ::javax::swing::text::html::HTMLDocument$Iterator;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$LeafIterator_FieldInfo_[] = {
	{"endOffset", "I", nullptr, $PRIVATE, $field(HTMLDocument$LeafIterator, endOffset)},
	{"tag", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PRIVATE, $field(HTMLDocument$LeafIterator, tag)},
	{"pos", "Ljavax/swing/text/ElementIterator;", nullptr, $PRIVATE, $field(HTMLDocument$LeafIterator, pos)},
	{}
};

$MethodInfo _HTMLDocument$LeafIterator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/Document;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$LeafIterator::*)($HTML$Tag*,$Document*)>(&HTMLDocument$LeafIterator::init$))},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getTag", "()Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{"nextLeaf", "(Ljavax/swing/text/ElementIterator;)V", nullptr, 0},
	{"setEndOffset", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _HTMLDocument$LeafIterator_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$LeafIterator", "javax.swing.text.html.HTMLDocument", "LeafIterator", $STATIC},
	{"javax.swing.text.html.HTMLDocument$Iterator", "javax.swing.text.html.HTMLDocument", "Iterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HTMLDocument$LeafIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$LeafIterator",
	"javax.swing.text.html.HTMLDocument$Iterator",
	nullptr,
	_HTMLDocument$LeafIterator_FieldInfo_,
	_HTMLDocument$LeafIterator_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$LeafIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$LeafIterator($Class* clazz) {
	return $of($alloc(HTMLDocument$LeafIterator));
}

void HTMLDocument$LeafIterator::init$($HTML$Tag* t, $Document* doc) {
	$HTMLDocument$Iterator::init$();
	$set(this, tag, t);
	$set(this, pos, $new($ElementIterator, doc));
	this->endOffset = 0;
	next();
}

$AttributeSet* HTMLDocument$LeafIterator::getAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, $nc(this->pos)->current());
	if (elem != nullptr) {
		$var($AttributeSet, a, $cast($AttributeSet, $nc($(elem->getAttributes()))->getAttribute(this->tag)));
		if (a == nullptr) {
			$assign(a, elem->getAttributes());
		}
		return a;
	}
	return nullptr;
}

int32_t HTMLDocument$LeafIterator::getStartOffset() {
	$var($Element, elem, $nc(this->pos)->current());
	if (elem != nullptr) {
		return elem->getStartOffset();
	}
	return -1;
}

int32_t HTMLDocument$LeafIterator::getEndOffset() {
	return this->endOffset;
}

void HTMLDocument$LeafIterator::next() {
	$useLocalCurrentObjectStackCache();
	for (nextLeaf(this->pos); isValid(); nextLeaf(this->pos)) {
		$var($Element, elem, $nc(this->pos)->current());
		if ($nc(elem)->getStartOffset() >= this->endOffset) {
			$var($AttributeSet, a, $nc($($nc(this->pos)->current()))->getAttributes());
			bool var$0 = $nc(a)->isDefined(this->tag);
			$init($StyleConstants);
			if (var$0 || $equals($nc(a)->getAttribute($StyleConstants::NameAttribute), this->tag)) {
				setEndOffset();
				break;
			}
		}
	}
}

$HTML$Tag* HTMLDocument$LeafIterator::getTag() {
	return this->tag;
}

bool HTMLDocument$LeafIterator::isValid() {
	return ($nc(this->pos)->current() != nullptr);
}

void HTMLDocument$LeafIterator::nextLeaf($ElementIterator* iter) {
	$useLocalCurrentObjectStackCache();
	for ($nc(iter)->next(); iter->current() != nullptr; iter->next()) {
		$var($Element, e, iter->current());
		if ($nc(e)->isLeaf()) {
			break;
		}
	}
}

void HTMLDocument$LeafIterator::setEndOffset() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, a0, getAttributes());
	this->endOffset = $nc($($nc(this->pos)->current()))->getEndOffset();
	$var($ElementIterator, fwd, $cast($ElementIterator, $nc(this->pos)->clone()));
	for (nextLeaf(fwd); $nc(fwd)->current() != nullptr; nextLeaf(fwd)) {
		$var($Element, e, fwd->current());
		$var($AttributeSet, a1, $cast($AttributeSet, $nc($($nc(e)->getAttributes()))->getAttribute(this->tag)));
		if ((a1 == nullptr) || (!$nc($of(a1))->equals(a0))) {
			break;
		}
		this->endOffset = e->getEndOffset();
	}
}

HTMLDocument$LeafIterator::HTMLDocument$LeafIterator() {
}

$Class* HTMLDocument$LeafIterator::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$LeafIterator, name, initialize, &_HTMLDocument$LeafIterator_ClassInfo_, allocate$HTMLDocument$LeafIterator);
	return class$;
}

$Class* HTMLDocument$LeafIterator::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax