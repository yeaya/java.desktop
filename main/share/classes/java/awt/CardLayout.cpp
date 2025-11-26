#include <java/awt/CardLayout.h>

#include <java/awt/CardLayout$Card.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $CardLayout$Card = ::java::awt::CardLayout$Card;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {

$CompoundAttribute _CardLayout_MethodAnnotations_addLayoutComponent3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CardLayout_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CardLayout, serialVersionUID)},
	{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/CardLayout$Card;>;", 0, $field(CardLayout, vector)},
	{"currentCard", "I", nullptr, 0, $field(CardLayout, currentCard)},
	{"hgap", "I", nullptr, 0, $field(CardLayout, hgap)},
	{"vgap", "I", nullptr, 0, $field(CardLayout, vgap)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CardLayout, serialPersistentFields)},
	{}
};

$MethodInfo _CardLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CardLayout::*)()>(&CardLayout::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(CardLayout::*)(int32_t,int32_t)>(&CardLayout::init$))},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _CardLayout_MethodAnnotations_addLayoutComponent3},
	{"checkLayout", "(Ljava/awt/Container;)V", nullptr, 0},
	{"first", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"getHgap", "()I", nullptr, $PUBLIC},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getVgap", "()I", nullptr, $PUBLIC},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"last", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"next", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"previous", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CardLayout::*)($ObjectInputStream*)>(&CardLayout::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setHgap", "(I)V", nullptr, $PUBLIC},
	{"setVgap", "(I)V", nullptr, $PUBLIC},
	{"show", "(Ljava/awt/Container;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"showDefaultComponent", "(Ljava/awt/Container;)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CardLayout::*)($ObjectOutputStream*)>(&CardLayout::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _CardLayout_InnerClassesInfo_[] = {
	{"java.awt.CardLayout$Card", "java.awt.CardLayout", "Card", 0},
	{}
};

$ClassInfo _CardLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.CardLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2,java.io.Serializable",
	_CardLayout_FieldInfo_,
	_CardLayout_MethodInfo_,
	nullptr,
	nullptr,
	_CardLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.CardLayout$Card"
};

$Object* allocate$CardLayout($Class* clazz) {
	return $of($alloc(CardLayout));
}

int32_t CardLayout::hashCode() {
	 return this->$LayoutManager2::hashCode();
}

bool CardLayout::equals(Object$* arg0) {
	 return this->$LayoutManager2::equals(arg0);
}

$Object* CardLayout::clone() {
	 return this->$LayoutManager2::clone();
}

void CardLayout::finalize() {
	this->$LayoutManager2::finalize();
}

$ObjectStreamFieldArray* CardLayout::serialPersistentFields = nullptr;

void CardLayout::init$() {
	CardLayout::init$(0, 0);
}

void CardLayout::init$(int32_t hgap, int32_t vgap) {
	$set(this, vector, $new($Vector));
	this->currentCard = 0;
	this->hgap = hgap;
	this->vgap = vgap;
}

int32_t CardLayout::getHgap() {
	return this->hgap;
}

void CardLayout::setHgap(int32_t hgap) {
	this->hgap = hgap;
}

int32_t CardLayout::getVgap() {
	return this->vgap;
}

void CardLayout::setVgap(int32_t vgap) {
	this->vgap = vgap;
}

void CardLayout::addLayoutComponent($Component* comp, Object$* constraints$renamed) {
	$var($Object, constraints, constraints$renamed);
	$synchronized($nc(comp)->getTreeLock()) {
		if (constraints == nullptr) {
			$assign(constraints, ""_s);
		}
		if ($instanceOf($String, constraints)) {
			addLayoutComponent($cast($String, constraints), comp);
		} else {
			$throwNew($IllegalArgumentException, "cannot add to layout: constraint must be a string"_s);
		}
	}
}

void CardLayout::addLayoutComponent($String* name, $Component* comp) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(comp)->getTreeLock()) {
		if (!$nc(this->vector)->isEmpty()) {
			comp->setVisible(false);
		}
		for (int32_t i = 0; i < $nc(this->vector)->size(); ++i) {
			if ($nc($nc(($cast($CardLayout$Card, $($nc(this->vector)->get(i)))))->name)->equals(name)) {
				$set($nc($cast($CardLayout$Card, $($nc(this->vector)->get(i)))), comp, comp);
				return;
			}
		}
		$nc(this->vector)->add($$new($CardLayout$Card, this, name, comp));
	}
}

void CardLayout::removeLayoutComponent($Component* comp) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(comp)->getTreeLock()) {
		for (int32_t i = 0; i < $nc(this->vector)->size(); ++i) {
			if ($nc(($cast($CardLayout$Card, $($nc(this->vector)->get(i)))))->comp == comp) {
				bool var$0 = comp->isVisible();
				if (var$0 && (comp->getParent() != nullptr)) {
					next($(comp->getParent()));
				}
				$nc(this->vector)->remove(i);
				if (this->currentCard > i) {
					--this->currentCard;
				}
				break;
			}
		}
	}
}

$Dimension* CardLayout::preferredLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t w = 0;
		int32_t h = 0;
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			$var($Dimension, d, $nc(comp)->getPreferredSize());
			if ($nc(d)->width > w) {
				w = d->width;
			}
			if ($nc(d)->height > h) {
				h = d->height;
			}
		}
		return $new($Dimension, $nc(insets)->left + insets->right + w + this->hgap * 2, insets->top + insets->bottom + h + this->vgap * 2);
	}
}

$Dimension* CardLayout::minimumLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		int32_t w = 0;
		int32_t h = 0;
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			$var($Dimension, d, $nc(comp)->getMinimumSize());
			if ($nc(d)->width > w) {
				w = d->width;
			}
			if ($nc(d)->height > h) {
				h = d->height;
			}
		}
		return $new($Dimension, $nc(insets)->left + insets->right + w + this->hgap * 2, insets->top + insets->bottom + h + this->vgap * 2);
	}
}

$Dimension* CardLayout::maximumLayoutSize($Container* target) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

float CardLayout::getLayoutAlignmentX($Container* parent) {
	return 0.5f;
}

float CardLayout::getLayoutAlignmentY($Container* parent) {
	return 0.5f;
}

void CardLayout::invalidateLayout($Container* target) {
}

void CardLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		$var($Insets, insets, parent->getInsets());
		int32_t ncomponents = parent->getComponentCount();
		$var($Component, comp, nullptr);
		bool currentFound = false;
		for (int32_t i = 0; i < ncomponents; ++i) {
			$assign(comp, parent->getComponent(i));
			$nc(comp)->setBounds(this->hgap + $nc(insets)->left, this->vgap + insets->top, parent->width - (this->hgap * 2 + insets->left + insets->right), parent->height - (this->vgap * 2 + insets->top + insets->bottom));
			if (comp->isVisible()) {
				currentFound = true;
			}
		}
		if (!currentFound && ncomponents > 0) {
			$nc($(parent->getComponent(0)))->setVisible(true);
		}
	}
}

void CardLayout::checkLayout($Container* parent) {
	if (!$equals($nc(parent)->getLayout(), this)) {
		$throwNew($IllegalArgumentException, "wrong parent for CardLayout"_s);
	}
}

void CardLayout::first($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		checkLayout(parent);
		int32_t ncomponents = parent->getComponentCount();
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			if ($nc(comp)->isVisible()) {
				comp->setVisible(false);
				break;
			}
		}
		if (ncomponents > 0) {
			this->currentCard = 0;
			$nc($(parent->getComponent(0)))->setVisible(true);
			parent->validate();
		}
	}
}

void CardLayout::next($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		checkLayout(parent);
		int32_t ncomponents = parent->getComponentCount();
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			if ($nc(comp)->isVisible()) {
				comp->setVisible(false);
				this->currentCard = $mod((i + 1), ncomponents);
				$assign(comp, parent->getComponent(this->currentCard));
				$nc(comp)->setVisible(true);
				parent->validate();
				return;
			}
		}
		showDefaultComponent(parent);
	}
}

void CardLayout::previous($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		checkLayout(parent);
		int32_t ncomponents = parent->getComponentCount();
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			if ($nc(comp)->isVisible()) {
				comp->setVisible(false);
				this->currentCard = ((i > 0) ? i - 1 : ncomponents - 1);
				$assign(comp, parent->getComponent(this->currentCard));
				$nc(comp)->setVisible(true);
				parent->validate();
				return;
			}
		}
		showDefaultComponent(parent);
	}
}

void CardLayout::showDefaultComponent($Container* parent) {
	if ($nc(parent)->getComponentCount() > 0) {
		this->currentCard = 0;
		$nc($(parent->getComponent(0)))->setVisible(true);
		parent->validate();
	}
}

void CardLayout::last($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		checkLayout(parent);
		int32_t ncomponents = parent->getComponentCount();
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($Component, comp, parent->getComponent(i));
			if ($nc(comp)->isVisible()) {
				comp->setVisible(false);
				break;
			}
		}
		if (ncomponents > 0) {
			this->currentCard = ncomponents - 1;
			$nc($(parent->getComponent(this->currentCard)))->setVisible(true);
			parent->validate();
		}
	}
}

void CardLayout::show($Container* parent, $String* name) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(parent)->getTreeLock()) {
		checkLayout(parent);
		$var($Component, next, nullptr);
		int32_t ncomponents = $nc(this->vector)->size();
		for (int32_t i = 0; i < ncomponents; ++i) {
			$var($CardLayout$Card, card, $cast($CardLayout$Card, $nc(this->vector)->get(i)));
			if ($nc($nc(card)->name)->equals(name)) {
				$assign(next, card->comp);
				this->currentCard = i;
				break;
			}
		}
		if ((next != nullptr) && !next->isVisible()) {
			ncomponents = parent->getComponentCount();
			for (int32_t i = 0; i < ncomponents; ++i) {
				$var($Component, comp, parent->getComponent(i));
				if ($nc(comp)->isVisible()) {
					comp->setVisible(false);
					break;
				}
			}
			next->setVisible(true);
			parent->validate();
		}
	}
}

$String* CardLayout::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[hgap="_s, $$str(this->hgap), ",vgap="_s, $$str(this->vgap), "]"_s});
}

void CardLayout::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	this->hgap = $nc(f)->get("hgap"_s, 0);
	this->vgap = f->get("vgap"_s, 0);
	if (f->defaulted("vector"_s)) {
		$var($Hashtable, tab, $cast($Hashtable, f->get("tab"_s, ($Object*)nullptr)));
		$set(this, vector, $new($Vector));
		if (tab != nullptr && !tab->isEmpty()) {
			{
				$var($Enumeration, e, tab->keys());
				for (; $nc(e)->hasMoreElements();) {
					$var($String, key, $cast($String, e->nextElement()));
					$var($Component, comp, $cast($Component, tab->get(key)));
					$nc(this->vector)->add($$new($CardLayout$Card, this, key, comp));
					if ($nc(comp)->isVisible()) {
						this->currentCard = $nc(this->vector)->size() - 1;
					}
				}
			}
		}
	} else {
		$set(this, vector, $cast($Vector, f->get("vector"_s, ($Object*)nullptr)));
		this->currentCard = f->get("currentCard"_s, 0);
	}
}

void CardLayout::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, tab, $new($Hashtable));
	int32_t ncomponents = $nc(this->vector)->size();
	for (int32_t i = 0; i < ncomponents; ++i) {
		$var($CardLayout$Card, card, $cast($CardLayout$Card, $nc(this->vector)->get(i)));
		tab->put($nc(card)->name, card->comp);
	}
	$var($ObjectOutputStream$PutField, f, $nc(s)->putFields());
	$nc(f)->put("hgap"_s, this->hgap);
	f->put("vgap"_s, this->vgap);
	f->put("vector"_s, $of(this->vector));
	f->put("currentCard"_s, this->currentCard);
	f->put("tab"_s, $of(tab));
	s->writeFields();
}

void clinit$CardLayout($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($Hashtable);
	$init($Integer);
	$load($Vector);
	$assignStatic(CardLayout::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "tab"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "hgap"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "vgap"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "vector"_s, $Vector::class$),
		$$new($ObjectStreamField, "currentCard"_s, $Integer::TYPE)
	}));
}

CardLayout::CardLayout() {
}

$Class* CardLayout::load$($String* name, bool initialize) {
	$loadClass(CardLayout, name, initialize, &_CardLayout_ClassInfo_, clinit$CardLayout, allocate$CardLayout);
	return class$;
}

$Class* CardLayout::class$ = nullptr;

	} // awt
} // java