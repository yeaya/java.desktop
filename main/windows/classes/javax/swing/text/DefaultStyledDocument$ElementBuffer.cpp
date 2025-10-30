#include <javax/swing/text/DefaultStyledDocument$ElementBuffer.h>

#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument$ElementEdit.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument$AttributeUndoableEdit.h>
#include <javax/swing/text/DefaultStyledDocument$ElementBuffer$ElemChanges.h>
#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

#undef EMPTY

using $DefaultStyledDocument$ElementBuffer$ElemChangesArray = $Array<::javax::swing::text::DefaultStyledDocument$ElementBuffer$ElemChanges>;
using $DefaultStyledDocument$ElementSpecArray = $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $AbstractDocument$ElementEdit = ::javax::swing::text::AbstractDocument$ElementEdit;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$AttributeUndoableEdit = ::javax::swing::text::DefaultStyledDocument$AttributeUndoableEdit;
using $DefaultStyledDocument$ElementBuffer$ElemChanges = ::javax::swing::text::DefaultStyledDocument$ElementBuffer$ElemChanges;
using $DefaultStyledDocument$ElementSpec = ::javax::swing::text::DefaultStyledDocument$ElementSpec;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultStyledDocument$ElementBuffer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultStyledDocument;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$ElementBuffer, this$0)},
	{"root", "Ljavax/swing/text/Element;", nullptr, 0, $field(DefaultStyledDocument$ElementBuffer, root)},
	{"pos", "I", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, pos)},
	{"offset", "I", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, offset)},
	{"length", "I", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, length)},
	{"endOffset", "I", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, endOffset)},
	{"changes", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/DefaultStyledDocument$ElementBuffer$ElemChanges;>;", $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, changes)},
	{"path", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/text/DefaultStyledDocument$ElementBuffer$ElemChanges;>;", $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, path)},
	{"insertOp", "Z", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, insertOp)},
	{"recreateLeafs", "Z", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, recreateLeafs)},
	{"insertPath", "[Ljavax/swing/text/DefaultStyledDocument$ElementBuffer$ElemChanges;", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, insertPath)},
	{"createdFracture", "Z", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, createdFracture)},
	{"fracturedParent", "Ljavax/swing/text/Element;", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, fracturedParent)},
	{"fracturedChild", "Ljavax/swing/text/Element;", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, fracturedChild)},
	{"offsetLastIndex", "Z", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, offsetLastIndex)},
	{"offsetLastIndexOnReplace", "Z", nullptr, $TRANSIENT, $field(DefaultStyledDocument$ElementBuffer, offsetLastIndexOnReplace)},
	{}
};

$MethodInfo _DefaultStyledDocument$ElementBuffer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument$ElementBuffer::*)($DefaultStyledDocument*,$Element*)>(&DefaultStyledDocument$ElementBuffer::init$))},
	{"advance", "(I)V", nullptr, 0},
	{"beginEdits", "(II)V", nullptr, 0},
	{"canJoin", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;)Z", nullptr, 0},
	{"change", "(IILjavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PUBLIC},
	{"changeUpdate", "()V", nullptr, $PROTECTED},
	{"clone", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"cloneAsNecessary", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;II)Ljavax/swing/text/Element;", nullptr, 0},
	{"create", "(I[Ljavax/swing/text/DefaultStyledDocument$ElementSpec;Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, 0},
	{"endEdits", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, 0},
	{"fracture", "(I)V", nullptr, 0},
	{"fractureDeepestLeaf", "([Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, 0},
	{"fractureFrom", "([Ljavax/swing/text/DefaultStyledDocument$ElementBuffer$ElemChanges;II)V", nullptr, 0},
	{"getRootElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"insert", "(II[Ljavax/swing/text/DefaultStyledDocument$ElementSpec;Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PUBLIC},
	{"insertElement", "(Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, 0},
	{"insertFirstContent", "([Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, 0},
	{"insertUpdate", "([Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, $PROTECTED},
	{"join", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;Ljavax/swing/text/Element;II)Ljavax/swing/text/Element;", nullptr, 0},
	{"pop", "()V", nullptr, 0},
	{"push", "(Ljavax/swing/text/Element;IZ)V", nullptr, 0},
	{"push", "(Ljavax/swing/text/Element;I)V", nullptr, 0},
	{"recreateFracturedElement", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;)Ljavax/swing/text/Element;", nullptr, 0},
	{"remove", "(IILjavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PUBLIC},
	{"removeElements", "(Ljavax/swing/text/Element;II)Z", nullptr, 0},
	{"removeUpdate", "()V", nullptr, $PROTECTED},
	{"split", "(II)Z", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultStyledDocument$ElementBuffer_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$ElementBuffer", "javax.swing.text.DefaultStyledDocument", "ElementBuffer", $PUBLIC},
	{"javax.swing.text.DefaultStyledDocument$ElementBuffer$ElemChanges", "javax.swing.text.DefaultStyledDocument$ElementBuffer", "ElemChanges", 0},
	{}
};

$ClassInfo _DefaultStyledDocument$ElementBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$ElementBuffer",
	"java.lang.Object",
	"java.io.Serializable",
	_DefaultStyledDocument$ElementBuffer_FieldInfo_,
	_DefaultStyledDocument$ElementBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$ElementBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$ElementBuffer($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$ElementBuffer));
}

void DefaultStyledDocument$ElementBuffer::init$($DefaultStyledDocument* this$0, $Element* root) {
	$set(this, this$0, this$0);
	$set(this, root, root);
	$set(this, changes, $new($Vector));
	$set(this, path, $new($Stack));
}

$Element* DefaultStyledDocument$ElementBuffer::getRootElement() {
	return this->root;
}

void DefaultStyledDocument$ElementBuffer::insert(int32_t offset, int32_t length, $DefaultStyledDocument$ElementSpecArray* data, $AbstractDocument$DefaultDocumentEvent* de) {
	if (length == 0) {
		return;
	}
	this->insertOp = true;
	beginEdits(offset, length);
	insertUpdate(data);
	endEdits(de);
	this->insertOp = false;
}

void DefaultStyledDocument$ElementBuffer::create(int32_t length, $DefaultStyledDocument$ElementSpecArray* data, $AbstractDocument$DefaultDocumentEvent* de) {
	$useLocalCurrentObjectStackCache();
	this->insertOp = true;
	beginEdits(this->offset, length);
	$var($Element, elem, this->root);
	int32_t index = $nc(elem)->getElementIndex(0);
	while (!elem->isLeaf()) {
		$var($Element, child, elem->getElement(index));
		push(elem, index);
		$assign(elem, child);
		index = $nc(elem)->getElementIndex(0);
	}
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
	$var($Element, child, $nc($nc(ec)->parent)->getElement(ec->index));
	$var($Element, var$0, ec->parent);
	$var($AttributeSet, var$1, $nc(child)->getAttributes());
	int32_t var$2 = this->this$0->getLength();
	$nc(ec->added)->addElement($(this->this$0->createLeafElement(var$0, var$1, var$2, child->getEndOffset())));
	$nc(ec->removed)->addElement(child);
	while ($nc(this->path)->size() > 1) {
		pop();
	}
	int32_t n = $nc(data)->length;
	$var($AttributeSet, newAttrs, nullptr);
	if (n > 0 && $nc(data->get(0))->getType() == $DefaultStyledDocument$ElementSpec::StartTagType) {
		$assign(newAttrs, $nc(data->get(0))->getAttributes());
	}
	if (newAttrs == nullptr) {
		$init($SimpleAttributeSet);
		$assign(newAttrs, $SimpleAttributeSet::EMPTY);
	}
	$var($MutableAttributeSet, attr, $cast($MutableAttributeSet, $nc(this->root)->getAttributes()));
	$nc(de)->addEdit($$new($DefaultStyledDocument$AttributeUndoableEdit, this->root, newAttrs, true));
	$nc(attr)->removeAttributes(static_cast<$AttributeSet*>(attr));
	attr->addAttributes(newAttrs);
	for (int32_t i = 1; i < n; ++i) {
		insertElement(data->get(i));
	}
	while ($nc(this->path)->size() != 0) {
		pop();
	}
	endEdits(de);
	this->insertOp = false;
}

void DefaultStyledDocument$ElementBuffer::remove(int32_t offset, int32_t length, $AbstractDocument$DefaultDocumentEvent* de) {
	beginEdits(offset, length);
	removeUpdate();
	endEdits(de);
}

void DefaultStyledDocument$ElementBuffer::change(int32_t offset, int32_t length, $AbstractDocument$DefaultDocumentEvent* de) {
	beginEdits(offset, length);
	changeUpdate();
	endEdits(de);
}

void DefaultStyledDocument$ElementBuffer::insertUpdate($DefaultStyledDocument$ElementSpecArray* data) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, this->root);
	int32_t index = $nc(elem)->getElementIndex(this->offset);
	while (!elem->isLeaf()) {
		$var($Element, child, elem->getElement(index));
		push(elem, ($nc(child)->isLeaf() ? index : index + 1));
		$assign(elem, child);
		index = $nc(elem)->getElementIndex(this->offset);
	}
	$set(this, insertPath, $new($DefaultStyledDocument$ElementBuffer$ElemChangesArray, $nc(this->path)->size()));
	$nc(this->path)->copyInto(this->insertPath);
	this->createdFracture = false;
	int32_t i = 0;
	this->recreateLeafs = false;
	if ($nc($nc(data)->get(0))->getType() == $DefaultStyledDocument$ElementSpec::ContentType) {
		insertFirstContent(data);
		this->pos += $nc(data->get(0))->getLength();
		i = 1;
	} else {
		fractureDeepestLeaf(data);
		i = 0;
	}
	int32_t n = $nc(data)->length;
	for (; i < n; ++i) {
		insertElement(data->get(i));
	}
	if (!this->createdFracture) {
		fracture(-1);
	}
	while ($nc(this->path)->size() != 0) {
		pop();
	}
	if (this->offsetLastIndex && this->offsetLastIndexOnReplace) {
		++$nc($nc(this->insertPath)->get($nc(this->insertPath)->length - 1))->index;
	}
	for (int32_t counter = $nc(this->insertPath)->length - 1; counter >= 0; --counter) {
		$var($DefaultStyledDocument$ElementBuffer$ElemChanges, change, $nc(this->insertPath)->get(counter));
		if ($nc(change)->parent == this->fracturedParent) {
			$nc(change->added)->addElement(this->fracturedChild);
		}
		bool var$1 = $nc($nc(change)->added)->size() > 0;
		bool var$0 = (var$1 || $nc($nc(change)->removed)->size() > 0);
		if (var$0 && !$nc(this->changes)->contains(change)) {
			$nc(this->changes)->addElement(change);
		}
	}
	if (this->offset == 0 && this->fracturedParent != nullptr && $nc(data->get(0))->getType() == $DefaultStyledDocument$ElementSpec::EndTagType) {
		int32_t counter = 0;
		while (counter < data->length && $nc(data->get(counter))->getType() == $DefaultStyledDocument$ElementSpec::EndTagType) {
			++counter;
		}
		$var($DefaultStyledDocument$ElementBuffer$ElemChanges, change, $nc(this->insertPath)->get($nc(this->insertPath)->length - counter - 1));
		$nc($nc(change)->removed)->insertElementAt($($nc(change->parent)->getElement(--change->index)), 0);
	}
}

void DefaultStyledDocument$ElementBuffer::removeUpdate() {
	removeElements(this->root, this->offset, this->offset + this->length);
}

void DefaultStyledDocument$ElementBuffer::changeUpdate() {
	bool didEnd = split(this->offset, this->length);
	if (!didEnd) {
		while ($nc(this->path)->size() != 0) {
			pop();
		}
		split(this->offset + this->length, 0);
	}
	while ($nc(this->path)->size() != 0) {
		pop();
	}
}

bool DefaultStyledDocument$ElementBuffer::split(int32_t offs, int32_t len) {
	$useLocalCurrentObjectStackCache();
	bool splitEnd = false;
	$var($Element, e, this->root);
	int32_t index = $nc(e)->getElementIndex(offs);
	while (!e->isLeaf()) {
		push(e, index);
		$assign(e, e->getElement(index));
		index = $nc(e)->getElementIndex(offs);
	}
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
	$var($Element, child, $nc($nc(ec)->parent)->getElement(ec->index));
	bool var$0 = $nc(child)->getStartOffset() < offs;
	if (var$0 && offs < child->getEndOffset()) {
		int32_t index0 = ec->index;
		int32_t index1 = index0;
		if (((offs + len) < $nc(ec->parent)->getEndOffset()) && (len != 0)) {
			index1 = $nc(ec->parent)->getElementIndex(offs + len);
			if (index1 == index0) {
				$nc(ec->removed)->addElement(child);
				$var($Element, var$1, ec->parent);
				$var($AttributeSet, var$2, child->getAttributes());
				$assign(e, this->this$0->createLeafElement(var$1, var$2, child->getStartOffset(), offs));
				$nc(ec->added)->addElement(e);
				$assign(e, this->this$0->createLeafElement(ec->parent, $(child->getAttributes()), offs, offs + len));
				$nc(ec->added)->addElement(e);
				$var($Element, var$3, ec->parent);
				$var($AttributeSet, var$4, child->getAttributes());
				int32_t var$5 = offs + len;
				$assign(e, this->this$0->createLeafElement(var$3, var$4, var$5, child->getEndOffset()));
				$nc(ec->added)->addElement(e);
				return true;
			} else {
				$assign(child, $nc(ec->parent)->getElement(index1));
				if ((offs + len) == $nc(child)->getStartOffset()) {
					index1 = index0;
				}
			}
			splitEnd = true;
		}
		this->pos = offs;
		$assign(child, $nc(ec->parent)->getElement(index0));
		$nc(ec->removed)->addElement(child);
		$var($Element, var$6, ec->parent);
		$var($AttributeSet, var$7, $nc(child)->getAttributes());
		$assign(e, this->this$0->createLeafElement(var$6, var$7, child->getStartOffset(), this->pos));
		$nc(ec->added)->addElement(e);
		$var($Element, var$8, ec->parent);
		$var($AttributeSet, var$9, $nc(child)->getAttributes());
		int32_t var$10 = this->pos;
		$assign(e, this->this$0->createLeafElement(var$8, var$9, var$10, child->getEndOffset()));
		$nc(ec->added)->addElement(e);
		for (int32_t i = index0 + 1; i < index1; ++i) {
			$assign(child, $nc(ec->parent)->getElement(i));
			$nc(ec->removed)->addElement(child);
			$nc(ec->added)->addElement(child);
		}
		if (index1 != index0) {
			$assign(child, $nc(ec->parent)->getElement(index1));
			this->pos = offs + len;
			$nc(ec->removed)->addElement(child);
			$var($Element, var$11, ec->parent);
			$var($AttributeSet, var$12, $nc(child)->getAttributes());
			$assign(e, this->this$0->createLeafElement(var$11, var$12, child->getStartOffset(), this->pos));
			$nc(ec->added)->addElement(e);
			$var($Element, var$13, ec->parent);
			$var($AttributeSet, var$14, $nc(child)->getAttributes());
			int32_t var$15 = this->pos;
			$assign(e, this->this$0->createLeafElement(var$13, var$14, var$15, child->getEndOffset()));
			$nc(ec->added)->addElement(e);
		}
	}
	return splitEnd;
}

void DefaultStyledDocument$ElementBuffer::endEdits($AbstractDocument$DefaultDocumentEvent* de) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(this->changes)->size();
	for (int32_t i = 0; i < n; ++i) {
		$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->changes)->elementAt(i)));
		$var($ElementArray, removed, $new($ElementArray, $nc($nc(ec)->removed)->size()));
		$nc(ec->removed)->copyInto(removed);
		$var($ElementArray, added, $new($ElementArray, $nc(ec->added)->size()));
		$nc(ec->added)->copyInto(added);
		int32_t index = ec->index;
		$nc(($cast($AbstractDocument$BranchElement, ec->parent)))->replace(index, removed->length, added);
		$var($AbstractDocument$ElementEdit, ee, $new($AbstractDocument$ElementEdit, ec->parent, index, removed, added));
		$nc(de)->addEdit(ee);
	}
	$nc(this->changes)->removeAllElements();
	$nc(this->path)->removeAllElements();
}

void DefaultStyledDocument$ElementBuffer::beginEdits(int32_t offset, int32_t length) {
	this->offset = offset;
	this->length = length;
	this->endOffset = offset + length;
	this->pos = offset;
	if (this->changes == nullptr) {
		$set(this, changes, $new($Vector));
	} else {
		$nc(this->changes)->removeAllElements();
	}
	if (this->path == nullptr) {
		$set(this, path, $new($Stack));
	} else {
		$nc(this->path)->removeAllElements();
	}
	$set(this, fracturedParent, nullptr);
	$set(this, fracturedChild, nullptr);
	this->offsetLastIndex = (this->offsetLastIndexOnReplace = false);
}

void DefaultStyledDocument$ElementBuffer::push($Element* e, int32_t index, bool isFracture) {
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $new($DefaultStyledDocument$ElementBuffer$ElemChanges, this, e, index, isFracture));
	$nc(this->path)->push(ec);
}

void DefaultStyledDocument$ElementBuffer::push($Element* e, int32_t index) {
	push(e, index, false);
}

void DefaultStyledDocument$ElementBuffer::pop() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
	$nc(this->path)->pop();
	bool var$0 = ($nc($nc(ec)->added)->size() > 0);
	if (var$0 || ($nc($nc(ec)->removed)->size() > 0)) {
		$nc(this->changes)->addElement(ec);
	} else if (!$nc(this->path)->isEmpty()) {
		$var($Element, e, ec->parent);
		if ($nc(e)->getElementCount() == 0) {
			$assign(ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
			$nc($nc(ec)->added)->removeElement(e);
		}
	}
}

void DefaultStyledDocument$ElementBuffer::advance(int32_t n) {
	this->pos += n;
}

void DefaultStyledDocument$ElementBuffer::insertElement($DefaultStyledDocument$ElementSpec* es) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
	{
		int32_t len = 0;
		switch ($nc(es)->getType()) {
		case $DefaultStyledDocument$ElementSpec::StartTagType:
			{
				{
					$var($Element, parent, nullptr)
					$var($Element, belem, nullptr)
					switch (es->getDirection()) {
					case $DefaultStyledDocument$ElementSpec::JoinNextDirection:
						{
							$assign(parent, $nc($nc(ec)->parent)->getElement(ec->index));
							if ($nc(parent)->isLeaf()) {
								if ((ec->index + 1) < $nc(ec->parent)->getElementCount()) {
									$assign(parent, $nc(ec->parent)->getElement(ec->index + 1));
								} else {
									$throwNew($StateInvariantError, "Join next to leaf"_s);
								}
							}
							push(parent, 0, true);
							break;
						}
					case $DefaultStyledDocument$ElementSpec::JoinFractureDirection:
						{
							if (!this->createdFracture) {
								fracture($nc(this->path)->size() - 1);
							}
							if (!ec->isFracture) {
								push(this->fracturedChild, 0, true);
							} else {
								push($($nc(ec->parent)->getElement(0)), 0, true);
							}
							break;
						}
					default:
						{
							$assign(belem, this->this$0->createBranchElement(ec->parent, $(es->getAttributes())));
							$nc(ec->added)->addElement(belem);
							push(belem, 0);
							break;
						}
					}
				}
				break;
			}
		case $DefaultStyledDocument$ElementSpec::EndTagType:
			{
				pop();
				break;
			}
		case $DefaultStyledDocument$ElementSpec::ContentType:
			{
				len = es->getLength();
				if (es->getDirection() != $DefaultStyledDocument$ElementSpec::JoinNextDirection) {
					$var($Element, leaf, this->this$0->createLeafElement($nc(ec)->parent, $(es->getAttributes()), this->pos, this->pos + len));
					$nc($nc(ec)->added)->addElement(leaf);
				} else if (!$nc(ec)->isFracture) {
					$var($Element, first, nullptr);
					if (this->insertPath != nullptr) {
						for (int32_t counter = $nc(this->insertPath)->length - 1; counter >= 0; --counter) {
							if ($nc(this->insertPath)->get(counter) == ec) {
								if (counter != ($nc(this->insertPath)->length - 1)) {
									$assign(first, $nc(ec->parent)->getElement(ec->index));
								}
								break;
							}
						}
					}
					if (first == nullptr) {
						$assign(first, $nc(ec->parent)->getElement(ec->index + 1));
					}
					$var($Element, var$0, ec->parent);
					$var($AttributeSet, var$1, $nc(first)->getAttributes());
					int32_t var$2 = this->pos;
					$var($Element, leaf, this->this$0->createLeafElement(var$0, var$1, var$2, first->getEndOffset()));
					$nc(ec->added)->addElement(leaf);
					$nc(ec->removed)->addElement(first);
				} else {
					$var($Element, first, $nc(ec->parent)->getElement(0));
					$var($Element, var$3, ec->parent);
					$var($AttributeSet, var$4, $nc(first)->getAttributes());
					int32_t var$5 = this->pos;
					$var($Element, leaf, this->this$0->createLeafElement(var$3, var$4, var$5, first->getEndOffset()));
					$nc(ec->added)->addElement(leaf);
					$nc(ec->removed)->addElement(first);
				}
				this->pos += len;
				break;
			}
		}
	}
}

bool DefaultStyledDocument$ElementBuffer::removeElements($Element* elem, int32_t rmOffs0, int32_t rmOffs1) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(elem)->isLeaf()) {
		int32_t index0 = elem->getElementIndex(rmOffs0);
		int32_t index1 = elem->getElementIndex(rmOffs1);
		push(elem, index0);
		$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
		if (index0 == index1) {
			$var($Element, child0, elem->getElement(index0));
			bool var$0 = rmOffs0 <= $nc(child0)->getStartOffset();
			if (var$0 && rmOffs1 >= child0->getEndOffset()) {
				$nc($nc(ec)->removed)->addElement(child0);
			} else if (removeElements(child0, rmOffs0, rmOffs1)) {
				$nc($nc(ec)->removed)->addElement(child0);
			}
		} else {
			$var($Element, child0, elem->getElement(index0));
			$var($Element, child1, elem->getElement(index1));
			bool containsOffs1 = (rmOffs1 < elem->getEndOffset());
			if (containsOffs1 && canJoin(child0, child1)) {
				for (int32_t i = index0; i <= index1; ++i) {
					$nc($nc(ec)->removed)->addElement($(elem->getElement(i)));
				}
				$var($Element, e, join(elem, child0, child1, rmOffs0, rmOffs1));
				$nc($nc(ec)->added)->addElement(e);
			} else {
				int32_t rmIndex0 = index0 + 1;
				int32_t rmIndex1 = index1 - 1;
				bool var$1 = $nc(child0)->getStartOffset() == rmOffs0;
				if (!var$1) {
					bool var$2 = index0 == 0 && $nc(child0)->getStartOffset() > rmOffs0;
					var$1 = (var$2 && child0->getEndOffset() <= rmOffs1);
				}
				if (var$1) {
					$assign(child0, nullptr);
					rmIndex0 = index0;
				}
				if (!containsOffs1) {
					$assign(child1, nullptr);
					++rmIndex1;
				} else if ($nc(child1)->getStartOffset() == rmOffs1) {
					$assign(child1, nullptr);
				}
				if (rmIndex0 <= rmIndex1) {
					$nc(ec)->index = rmIndex0;
				}
				for (int32_t i = rmIndex0; i <= rmIndex1; ++i) {
					$nc($nc(ec)->removed)->addElement($(elem->getElement(i)));
				}
				if (child0 != nullptr) {
					if (removeElements(child0, rmOffs0, rmOffs1)) {
						$nc($nc(ec)->removed)->insertElementAt(child0, 0);
						ec->index = index0;
					}
				}
				if (child1 != nullptr) {
					if (removeElements(child1, rmOffs0, rmOffs1)) {
						$nc($nc(ec)->removed)->addElement(child1);
					}
				}
			}
		}
		pop();
		int32_t var$3 = elem->getElementCount();
		int32_t var$5 = $nc($nc(ec)->removed)->size();
		int32_t var$4 = (var$5 - $nc(ec->added)->size());
		if (var$3 == var$4) {
			return true;
		}
	}
	return false;
}

bool DefaultStyledDocument$ElementBuffer::canJoin($Element* e0, $Element* e1) {
	$useLocalCurrentObjectStackCache();
	if ((e0 == nullptr) || (e1 == nullptr)) {
		return false;
	}
	bool leaf0 = $nc(e0)->isLeaf();
	bool leaf1 = $nc(e1)->isLeaf();
	if (leaf0 != leaf1) {
		return false;
	}
	if (leaf0) {
		return $nc($(e0->getAttributes()))->isEqual($(e1->getAttributes()));
	}
	$var($String, name0, e0->getName());
	$var($String, name1, e1->getName());
	if (name0 != nullptr) {
		return name0->equals(name1);
	}
	if (name1 != nullptr) {
		return name1->equals(name0);
	}
	return true;
}

$Element* DefaultStyledDocument$ElementBuffer::join($Element* p, $Element* left, $Element* right, int32_t rmOffs0, int32_t rmOffs1) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(left)->isLeaf();
	if (var$0 && $nc(right)->isLeaf()) {
		$var($Element, var$1, p);
		$var($AttributeSet, var$2, left->getAttributes());
		int32_t var$3 = left->getStartOffset();
		return this->this$0->createLeafElement(var$1, var$2, var$3, right->getEndOffset());
	} else {
		bool var$5 = (!left->isLeaf());
		if (var$5 && (!right->isLeaf())) {
			$var($Element, to, this->this$0->createBranchElement(p, $(left->getAttributes())));
			int32_t ljIndex = left->getElementIndex(rmOffs0);
			int32_t rjIndex = right->getElementIndex(rmOffs1);
			$var($Element, lj, left->getElement(ljIndex));
			if ($nc(lj)->getStartOffset() >= rmOffs0) {
				$assign(lj, nullptr);
			}
			$var($Element, rj, right->getElement(rjIndex));
			if ($nc(rj)->getStartOffset() == rmOffs1) {
				$assign(rj, nullptr);
			}
			$var($Vector, children, $new($Vector));
			for (int32_t i = 0; i < ljIndex; ++i) {
				children->addElement($(clone(to, $(left->getElement(i)))));
			}
			if (canJoin(lj, rj)) {
				$var($Element, e, join(to, lj, rj, rmOffs0, rmOffs1));
				children->addElement(e);
			} else {
				if (lj != nullptr) {
					children->addElement($(cloneAsNecessary(to, lj, rmOffs0, rmOffs1)));
				}
				if (rj != nullptr) {
					children->addElement($(cloneAsNecessary(to, rj, rmOffs0, rmOffs1)));
				}
			}
			int32_t n = right->getElementCount();
			for (int32_t i = (rj == nullptr) ? rjIndex : rjIndex + 1; i < n; ++i) {
				children->addElement($(clone(to, $(right->getElement(i)))));
			}
			$var($ElementArray, c, $new($ElementArray, children->size()));
			children->copyInto(c);
			$nc(($cast($AbstractDocument$BranchElement, to)))->replace(0, 0, c);
			return to;
		} else {
			$throwNew($StateInvariantError, "No support to join leaf element with non-leaf element"_s);
		}
	}
}

$Element* DefaultStyledDocument$ElementBuffer::clone($Element* parent, $Element* clonee) {
	$useLocalCurrentObjectStackCache();
	if ($nc(clonee)->isLeaf()) {
		$var($Element, var$0, parent);
		$var($AttributeSet, var$1, clonee->getAttributes());
		int32_t var$2 = clonee->getStartOffset();
		return this->this$0->createLeafElement(var$0, var$1, var$2, clonee->getEndOffset());
	}
	$var($Element, e, this->this$0->createBranchElement(parent, $($nc(clonee)->getAttributes())));
	int32_t n = $nc(clonee)->getElementCount();
	$var($ElementArray, children, $new($ElementArray, n));
	for (int32_t i = 0; i < n; ++i) {
		children->set(i, $(clone(e, $(clonee->getElement(i)))));
	}
	$nc(($cast($AbstractDocument$BranchElement, e)))->replace(0, 0, children);
	return e;
}

$Element* DefaultStyledDocument$ElementBuffer::cloneAsNecessary($Element* parent, $Element* clonee, int32_t rmOffs0, int32_t rmOffs1) {
	$useLocalCurrentObjectStackCache();
	if ($nc(clonee)->isLeaf()) {
		$var($Element, var$0, parent);
		$var($AttributeSet, var$1, clonee->getAttributes());
		int32_t var$2 = clonee->getStartOffset();
		return this->this$0->createLeafElement(var$0, var$1, var$2, clonee->getEndOffset());
	}
	$var($Element, e, this->this$0->createBranchElement(parent, $($nc(clonee)->getAttributes())));
	int32_t n = $nc(clonee)->getElementCount();
	$var($ArrayList, childrenList, $new($ArrayList, n));
	for (int32_t i = 0; i < n; ++i) {
		$var($Element, elem, clonee->getElement(i));
		bool var$3 = $nc(elem)->getStartOffset() < rmOffs0;
		if (var$3 || $nc(elem)->getEndOffset() > rmOffs1) {
			childrenList->add($(cloneAsNecessary(e, elem, rmOffs0, rmOffs1)));
		}
	}
	$var($ElementArray, children, $new($ElementArray, childrenList->size()));
	$assign(children, $fcast($ElementArray, childrenList->toArray(children)));
	$nc(($cast($AbstractDocument$BranchElement, e)))->replace(0, 0, children);
	return e;
}

void DefaultStyledDocument$ElementBuffer::fracture(int32_t depth) {
	$useLocalCurrentObjectStackCache();
	int32_t cLength = $nc(this->insertPath)->length;
	int32_t lastIndex = -1;
	bool needRecreate = this->recreateLeafs;
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, lastChange, $nc(this->insertPath)->get(cLength - 1));
	bool childAltered = (($nc(lastChange)->index + 1) < $nc(lastChange->parent)->getElementCount());
	int32_t deepestAlteredIndex = (needRecreate) ? cLength : -1;
	int32_t lastAlteredIndex = cLength - 1;
	this->createdFracture = true;
	for (int32_t counter = cLength - 2; counter >= 0; --counter) {
		$var($DefaultStyledDocument$ElementBuffer$ElemChanges, change, $nc(this->insertPath)->get(counter));
		if ($nc($nc(change)->added)->size() > 0 || counter == depth) {
			lastIndex = counter;
			if (!needRecreate && childAltered) {
				needRecreate = true;
				if (deepestAlteredIndex == -1) {
					deepestAlteredIndex = lastAlteredIndex + 1;
				}
			}
		}
		if (!childAltered && $nc(change)->index < $nc(change->parent)->getElementCount()) {
			childAltered = true;
			lastAlteredIndex = counter;
		}
	}
	if (needRecreate) {
		if (lastIndex == -1) {
			lastIndex = cLength - 1;
		}
		fractureFrom(this->insertPath, lastIndex, deepestAlteredIndex);
	}
}

void DefaultStyledDocument$ElementBuffer::fractureFrom($DefaultStyledDocument$ElementBuffer$ElemChangesArray* changed, int32_t startIndex, int32_t endFractureIndex) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, change, $nc(changed)->get(startIndex));
	$var($Element, child, nullptr);
	$var($Element, newChild, nullptr);
	int32_t changeLength = changed->length;
	if ((startIndex + 1) == changeLength) {
		$assign(child, $nc($nc(change)->parent)->getElement(change->index));
	} else {
		$assign(child, $nc($nc(change)->parent)->getElement(change->index - 1));
	}
	if ($nc(child)->isLeaf()) {
		$var($Element, var$0, $nc(change)->parent);
		$var($AttributeSet, var$1, child->getAttributes());
		int32_t var$2 = $Math::max(this->endOffset, child->getStartOffset());
		$assign(newChild, this->this$0->createLeafElement(var$0, var$1, var$2, child->getEndOffset()));
	} else {
		$assign(newChild, this->this$0->createBranchElement($nc(change)->parent, $(child->getAttributes())));
	}
	$set(this, fracturedParent, $nc(change)->parent);
	$set(this, fracturedChild, newChild);
	$var($Element, parent, newChild);
	while (++startIndex < endFractureIndex) {
		bool isEnd = ((startIndex + 1) == endFractureIndex);
		bool isEndLeaf = ((startIndex + 1) == changeLength);
		$assign(change, changed->get(startIndex));
		if (isEnd) {
			if (this->offsetLastIndex || !isEndLeaf) {
				$assign(child, nullptr);
			} else {
				$assign(child, $nc($nc(change)->parent)->getElement(change->index));
			}
		} else {
			$assign(child, $nc($nc(change)->parent)->getElement(change->index - 1));
		}
		if (child != nullptr) {
			if (child->isLeaf()) {
				$var($Element, var$3, parent);
				$var($AttributeSet, var$4, child->getAttributes());
				int32_t var$5 = $Math::max(this->endOffset, child->getStartOffset());
				$assign(newChild, this->this$0->createLeafElement(var$3, var$4, var$5, child->getEndOffset()));
			} else {
				$assign(newChild, this->this$0->createBranchElement(parent, $(child->getAttributes())));
			}
		} else {
			$assign(newChild, nullptr);
		}
		int32_t kidsToMove = $nc($nc(change)->parent)->getElementCount() - change->index;
		$var($ElementArray, kids, nullptr);
		int32_t moveStartIndex = 0;
		int32_t kidStartIndex = 1;
		if (newChild == nullptr) {
			if (isEndLeaf) {
				--kidsToMove;
				moveStartIndex = change->index + 1;
			} else {
				moveStartIndex = change->index;
			}
			kidStartIndex = 0;
			$assign(kids, $new($ElementArray, kidsToMove));
		} else {
			if (!isEnd) {
				++kidsToMove;
				moveStartIndex = change->index;
			} else {
				moveStartIndex = change->index + 1;
			}
			$assign(kids, $new($ElementArray, kidsToMove));
			kids->set(0, newChild);
		}
		for (int32_t counter = kidStartIndex; counter < kidsToMove; ++counter) {
			$var($Element, toMove, $nc(change->parent)->getElement(moveStartIndex++));
			$nc(kids)->set(counter, $(recreateFracturedElement(parent, toMove)));
			$nc(change->removed)->addElement(toMove);
		}
		$nc(($cast($AbstractDocument$BranchElement, parent)))->replace(0, 0, kids);
		$assign(parent, newChild);
	}
}

$Element* DefaultStyledDocument$ElementBuffer::recreateFracturedElement($Element* parent, $Element* toDuplicate) {
	$useLocalCurrentObjectStackCache();
	if ($nc(toDuplicate)->isLeaf()) {
		$var($Element, var$0, parent);
		$var($AttributeSet, var$1, toDuplicate->getAttributes());
		int32_t var$2 = $Math::max(toDuplicate->getStartOffset(), this->endOffset);
		return this->this$0->createLeafElement(var$0, var$1, var$2, toDuplicate->getEndOffset());
	}
	$var($Element, newParent, this->this$0->createBranchElement(parent, $($nc(toDuplicate)->getAttributes())));
	int32_t childCount = $nc(toDuplicate)->getElementCount();
	$var($ElementArray, newKids, $new($ElementArray, childCount));
	for (int32_t counter = 0; counter < childCount; ++counter) {
		newKids->set(counter, $(recreateFracturedElement(newParent, $(toDuplicate->getElement(counter)))));
	}
	$nc(($cast($AbstractDocument$BranchElement, newParent)))->replace(0, 0, newKids);
	return newParent;
}

void DefaultStyledDocument$ElementBuffer::fractureDeepestLeaf($DefaultStyledDocument$ElementSpecArray* specs) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
	$var($Element, child, $nc($nc(ec)->parent)->getElement(ec->index));
	if (this->offset != 0) {
		$var($Element, var$0, ec->parent);
		$var($AttributeSet, var$1, $nc(child)->getAttributes());
		$var($Element, newChild, this->this$0->createLeafElement(var$0, var$1, child->getStartOffset(), this->offset));
		$nc(ec->added)->addElement(newChild);
	}
	$nc(ec->removed)->addElement(child);
	if ($nc(child)->getEndOffset() != this->endOffset) {
		this->recreateLeafs = true;
	} else {
		this->offsetLastIndex = true;
	}
}

void DefaultStyledDocument$ElementBuffer::insertFirstContent($DefaultStyledDocument$ElementSpecArray* specs) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultStyledDocument$ElementSpec, firstSpec, $nc(specs)->get(0));
	$var($DefaultStyledDocument$ElementBuffer$ElemChanges, ec, $cast($DefaultStyledDocument$ElementBuffer$ElemChanges, $nc(this->path)->peek()));
	$var($Element, child, $nc($nc(ec)->parent)->getElement(ec->index));
	int32_t firstEndOffset = this->offset + $nc(firstSpec)->getLength();
	bool isOnlyContent = (specs->length == 1);
	{
		$var($Element, newE, nullptr)
		switch (firstSpec->getDirection()) {
		case $DefaultStyledDocument$ElementSpec::JoinPreviousDirection:
			{
				if ($nc(child)->getEndOffset() != firstEndOffset && !isOnlyContent) {
					$var($Element, var$0, ec->parent);
					$var($AttributeSet, var$1, child->getAttributes());
					$var($Element, newE, this->this$0->createLeafElement(var$0, var$1, child->getStartOffset(), firstEndOffset));
					$nc(ec->added)->addElement(newE);
					$nc(ec->removed)->addElement(child);
					if (child->getEndOffset() != this->endOffset) {
						this->recreateLeafs = true;
					} else {
						this->offsetLastIndex = true;
					}
				} else {
					this->offsetLastIndex = true;
					this->offsetLastIndexOnReplace = true;
				}
				break;
			}
		case $DefaultStyledDocument$ElementSpec::JoinNextDirection:
			{
				if (this->offset != 0) {
					$var($Element, var$2, ec->parent);
					$var($AttributeSet, var$3, $nc(child)->getAttributes());
					$var($Element, newE, this->this$0->createLeafElement(var$2, var$3, child->getStartOffset(), this->offset));
					$nc(ec->added)->addElement(newE);
					$var($Element, nextChild, $nc(ec->parent)->getElement(ec->index + 1));
					if (isOnlyContent) {
						$var($Element, var$4, ec->parent);
						$var($AttributeSet, var$5, $nc(nextChild)->getAttributes());
						int32_t var$6 = this->offset;
						$assign(newE, this->this$0->createLeafElement(var$4, var$5, var$6, nextChild->getEndOffset()));
					} else {
						$assign(newE, this->this$0->createLeafElement(ec->parent, $($nc(nextChild)->getAttributes()), this->offset, firstEndOffset));
					}
					$nc(ec->added)->addElement(newE);
					$nc(ec->removed)->addElement(child);
					$nc(ec->removed)->addElement(nextChild);
				}
				break;
			}
		default:
			{
				if ($nc(child)->getStartOffset() != this->offset) {
					$var($Element, var$7, ec->parent);
					$var($AttributeSet, var$8, child->getAttributes());
					$var($Element, newE, this->this$0->createLeafElement(var$7, var$8, child->getStartOffset(), this->offset));
					$nc(ec->added)->addElement(newE);
				}
				$nc(ec->removed)->addElement(child);
				$assign(newE, this->this$0->createLeafElement(ec->parent, $(firstSpec->getAttributes()), this->offset, firstEndOffset));
				$nc(ec->added)->addElement(newE);
				if ($nc(child)->getEndOffset() != this->endOffset) {
					this->recreateLeafs = true;
				} else {
					this->offsetLastIndex = true;
				}
				break;
			}
		}
	}
}

DefaultStyledDocument$ElementBuffer::DefaultStyledDocument$ElementBuffer() {
}

$Class* DefaultStyledDocument$ElementBuffer::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$ElementBuffer, name, initialize, &_DefaultStyledDocument$ElementBuffer_ClassInfo_, allocate$DefaultStyledDocument$ElementBuffer);
	return class$;
}

$Class* DefaultStyledDocument$ElementBuffer::class$ = nullptr;

		} // text
	} // swing
} // javax