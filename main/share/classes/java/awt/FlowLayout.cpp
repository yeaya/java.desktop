#include <java/awt/FlowLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING
#undef LEFT
#undef RIGHT
#undef TRAILING

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _FlowLayout_FieldInfo_[] = {
	{"LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FlowLayout, LEFT)},
	{"CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FlowLayout, CENTER)},
	{"RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FlowLayout, RIGHT)},
	{"LEADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FlowLayout, LEADING)},
	{"TRAILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FlowLayout, TRAILING)},
	{"align", "I", nullptr, 0, $field(FlowLayout, align)},
	{"newAlign", "I", nullptr, 0, $field(FlowLayout, newAlign)},
	{"hgap", "I", nullptr, 0, $field(FlowLayout, hgap)},
	{"vgap", "I", nullptr, 0, $field(FlowLayout, vgap)},
	{"alignOnBaseline", "Z", nullptr, $PRIVATE, $field(FlowLayout, alignOnBaseline)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FlowLayout, serialVersionUID)},
	{"currentSerialVersion", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FlowLayout, currentSerialVersion)},
	{"serialVersionOnStream", "I", nullptr, $PRIVATE, $field(FlowLayout, serialVersionOnStream)},
	{}
};

$MethodInfo _FlowLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowLayout::*)()>(&FlowLayout::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(FlowLayout::*)(int32_t)>(&FlowLayout::init$))},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(FlowLayout::*)(int32_t,int32_t,int32_t)>(&FlowLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"getAlignOnBaseline", "()Z", nullptr, $PUBLIC},
	{"getAlignment", "()I", nullptr, $PUBLIC},
	{"getHgap", "()I", nullptr, $PUBLIC},
	{"getVgap", "()I", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"moveComponents", "(Ljava/awt/Container;IIIIIIZZ[I[I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FlowLayout::*)($Container*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,bool,$ints*,$ints*)>(&FlowLayout::moveComponents))},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FlowLayout::*)($ObjectInputStream*)>(&FlowLayout::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setAlignOnBaseline", "(Z)V", nullptr, $PUBLIC},
	{"setAlignment", "(I)V", nullptr, $PUBLIC},
	{"setHgap", "(I)V", nullptr, $PUBLIC},
	{"setVgap", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FlowLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.FlowLayout",
	"java.lang.Object",
	"java.awt.LayoutManager,java.io.Serializable",
	_FlowLayout_FieldInfo_,
	_FlowLayout_MethodInfo_
};

$Object* allocate$FlowLayout($Class* clazz) {
	return $of($alloc(FlowLayout));
}

int32_t FlowLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool FlowLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* FlowLayout::clone() {
	 return this->$LayoutManager::clone();
}

void FlowLayout::finalize() {
	this->$LayoutManager::finalize();
}

void FlowLayout::init$() {
	FlowLayout::init$(FlowLayout::CENTER, 5, 5);
}

void FlowLayout::init$(int32_t align) {
	FlowLayout::init$(align, 5, 5);
}

void FlowLayout::init$(int32_t align, int32_t hgap, int32_t vgap) {
	this->serialVersionOnStream = FlowLayout::currentSerialVersion;
	this->hgap = hgap;
	this->vgap = vgap;
	setAlignment(align);
}

int32_t FlowLayout::getAlignment() {
	return this->newAlign;
}

void FlowLayout::setAlignment(int32_t align) {
	this->newAlign = align;
	switch (align) {
	case FlowLayout::LEADING:
		{
			this->align = FlowLayout::LEFT;
			break;
		}
	case FlowLayout::TRAILING:
		{
			this->align = FlowLayout::RIGHT;
			break;
		}
	default:
		{
			this->align = align;
			break;
		}
	}
}

int32_t FlowLayout::getHgap() {
	return this->hgap;
}

void FlowLayout::setHgap(int32_t hgap) {
	this->hgap = hgap;
}

int32_t FlowLayout::getVgap() {
	return this->vgap;
}

void FlowLayout::setVgap(int32_t vgap) {
	this->vgap = vgap;
}

void FlowLayout::setAlignOnBaseline(bool alignOnBaseline) {
	this->alignOnBaseline = alignOnBaseline;
}

bool FlowLayout::getAlignOnBaseline() {
	return this->alignOnBaseline;
}

void FlowLayout::addLayoutComponent($String* name, $Component* comp) {
}

void FlowLayout::removeLayoutComponent($Component* comp) {
}

$Dimension* FlowLayout::preferredLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(target)->getTreeLock()) {
		$var($Dimension, dim, $new($Dimension, 0, 0));
		int32_t nmembers = target->getComponentCount();
		bool firstVisibleComponent = true;
		bool useBaseline = getAlignOnBaseline();
		int32_t maxAscent = 0;
		int32_t maxDescent = 0;
		for (int32_t i = 0; i < nmembers; ++i) {
			$var($Component, m, target->getComponent(i));
			if ($nc(m)->isVisible()) {
				$var($Dimension, d, m->getPreferredSize());
				dim->height = $Math::max(dim->height, $nc(d)->height);
				if (firstVisibleComponent) {
					firstVisibleComponent = false;
				} else {
					dim->width += this->hgap;
				}
				dim->width += $nc(d)->width;
				if (useBaseline) {
					int32_t baseline = m->getBaseline(d->width, d->height);
					if (baseline >= 0) {
						maxAscent = $Math::max(maxAscent, baseline);
						maxDescent = $Math::max(maxDescent, d->height - baseline);
					}
				}
			}
		}
		if (useBaseline) {
			dim->height = $Math::max(maxAscent + maxDescent, dim->height);
		}
		$var($Insets, insets, target->getInsets());
		dim->width += $nc(insets)->left + insets->right + this->hgap * 2;
		dim->height += insets->top + insets->bottom + this->vgap * 2;
		return dim;
	}
}

$Dimension* FlowLayout::minimumLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(target)->getTreeLock()) {
		bool useBaseline = getAlignOnBaseline();
		$var($Dimension, dim, $new($Dimension, 0, 0));
		int32_t nmembers = target->getComponentCount();
		int32_t maxAscent = 0;
		int32_t maxDescent = 0;
		bool firstVisibleComponent = true;
		for (int32_t i = 0; i < nmembers; ++i) {
			$var($Component, m, target->getComponent(i));
			if ($nc(m)->visible) {
				$var($Dimension, d, m->getMinimumSize());
				dim->height = $Math::max(dim->height, $nc(d)->height);
				if (firstVisibleComponent) {
					firstVisibleComponent = false;
				} else {
					dim->width += this->hgap;
				}
				dim->width += $nc(d)->width;
				if (useBaseline) {
					int32_t baseline = m->getBaseline(d->width, d->height);
					if (baseline >= 0) {
						maxAscent = $Math::max(maxAscent, baseline);
						maxDescent = $Math::max(maxDescent, dim->height - baseline);
					}
				}
			}
		}
		if (useBaseline) {
			dim->height = $Math::max(maxAscent + maxDescent, dim->height);
		}
		$var($Insets, insets, target->getInsets());
		dim->width += $nc(insets)->left + insets->right + this->hgap * 2;
		dim->height += insets->top + insets->bottom + this->vgap * 2;
		return dim;
	}
}

int32_t FlowLayout::moveComponents($Container* target, int32_t x, int32_t y, int32_t width, int32_t height, int32_t rowStart, int32_t rowEnd, bool ltr, bool useBaseline, $ints* ascent, $ints* descent) {
	$useLocalCurrentObjectStackCache();
	switch (this->newAlign) {
	case FlowLayout::LEFT:
		{
			x += ltr ? 0 : width;
			break;
		}
	case FlowLayout::CENTER:
		{
			x += width / 2;
			break;
		}
	case FlowLayout::RIGHT:
		{
			x += ltr ? width : 0;
			break;
		}
	case FlowLayout::LEADING:
		{
			break;
		}
	case FlowLayout::TRAILING:
		{
			x += width;
			break;
		}
	}
	int32_t maxAscent = 0;
	int32_t nonbaselineHeight = 0;
	int32_t baselineOffset = 0;
	if (useBaseline) {
		int32_t maxDescent = 0;
		for (int32_t i = rowStart; i < rowEnd; ++i) {
			$var($Component, m, $nc(target)->getComponent(i));
			if ($nc(m)->visible) {
				if ($nc(ascent)->get(i) >= 0) {
					maxAscent = $Math::max(maxAscent, ascent->get(i));
					maxDescent = $Math::max(maxDescent, $nc(descent)->get(i));
				} else {
					nonbaselineHeight = $Math::max(m->getHeight(), nonbaselineHeight);
				}
			}
		}
		height = $Math::max(maxAscent + maxDescent, nonbaselineHeight);
		baselineOffset = (height - maxAscent - maxDescent) / 2;
	}
	for (int32_t i = rowStart; i < rowEnd; ++i) {
		$var($Component, m, $nc(target)->getComponent(i));
		if ($nc(m)->isVisible()) {
			int32_t cy = 0;
			if (useBaseline && $nc(ascent)->get(i) >= 0) {
				cy = y + baselineOffset + maxAscent - ascent->get(i);
			} else {
				cy = y + (height - m->height) / 2;
			}
			if (ltr) {
				m->setLocation(x, cy);
			} else {
				m->setLocation(target->width - x - m->width, cy);
			}
			x += m->width + this->hgap;
		}
	}
	return height;
}

void FlowLayout::layoutContainer($Container* target) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(target)->getTreeLock()) {
		$var($Insets, insets, target->getInsets());
		int32_t maxwidth = target->width - ($nc(insets)->left + insets->right + this->hgap * 2);
		int32_t nmembers = target->getComponentCount();
		int32_t x = 0;
		int32_t y = insets->top + this->vgap;
		int32_t rowh = 0;
		int32_t start = 0;
		bool ltr = $nc($(target->getComponentOrientation()))->isLeftToRight();
		bool useBaseline = getAlignOnBaseline();
		$var($ints, ascent, nullptr);
		$var($ints, descent, nullptr);
		if (useBaseline) {
			$assign(ascent, $new($ints, nmembers));
			$assign(descent, $new($ints, nmembers));
		}
		for (int32_t i = 0; i < nmembers; ++i) {
			$var($Component, m, target->getComponent(i));
			if ($nc(m)->isVisible()) {
				$var($Dimension, d, m->getPreferredSize());
				m->setSize($nc(d)->width, d->height);
				if (useBaseline) {
					int32_t baseline = m->getBaseline($nc(d)->width, d->height);
					if (baseline >= 0) {
						$nc(ascent)->set(i, baseline);
						$nc(descent)->set(i, $nc(d)->height - baseline);
					} else {
						$nc(ascent)->set(i, -1);
					}
				}
				if ((x == 0) || ((x + $nc(d)->width) <= maxwidth)) {
					if (x > 0) {
						x += this->hgap;
					}
					x += d->width;
					rowh = $Math::max(rowh, d->height);
				} else {
					rowh = moveComponents(target, insets->left + this->hgap, y, maxwidth - x, rowh, start, i, ltr, useBaseline, ascent, descent);
					x = d->width;
					y += this->vgap + rowh;
					rowh = d->height;
					start = i;
				}
			}
		}
		moveComponents(target, insets->left + this->hgap, y, maxwidth - x, rowh, start, nmembers, ltr, useBaseline, ascent, descent);
	}
}

void FlowLayout::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	if (this->serialVersionOnStream < 1) {
		setAlignment(this->align);
	}
	this->serialVersionOnStream = FlowLayout::currentSerialVersion;
}

$String* FlowLayout::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, ""_s);
	switch (this->align) {
	case FlowLayout::LEFT:
		{
			$assign(str, ",align=left"_s);
			break;
		}
	case FlowLayout::CENTER:
		{
			$assign(str, ",align=center"_s);
			break;
		}
	case FlowLayout::RIGHT:
		{
			$assign(str, ",align=right"_s);
			break;
		}
	case FlowLayout::LEADING:
		{
			$assign(str, ",align=leading"_s);
			break;
		}
	case FlowLayout::TRAILING:
		{
			$assign(str, ",align=trailing"_s);
			break;
		}
	}
	return $str({$($of(this)->getClass()->getName()), "[hgap="_s, $$str(this->hgap), ",vgap="_s, $$str(this->vgap), str, "]"_s});
}

FlowLayout::FlowLayout() {
}

$Class* FlowLayout::load$($String* name, bool initialize) {
	$loadClass(FlowLayout, name, initialize, &_FlowLayout_ClassInfo_, allocate$FlowLayout);
	return class$;
}

$Class* FlowLayout::class$ = nullptr;

	} // awt
} // java