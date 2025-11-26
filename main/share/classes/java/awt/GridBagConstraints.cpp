#include <java/awt/GridBagConstraints.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Insets.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

#undef ABOVE_BASELINE
#undef ABOVE_BASELINE_LEADING
#undef ABOVE_BASELINE_TRAILING
#undef BASELINE
#undef BASELINE_LEADING
#undef BASELINE_TRAILING
#undef BELOW_BASELINE
#undef BELOW_BASELINE_LEADING
#undef BELOW_BASELINE_TRAILING
#undef BOTH
#undef CENTER
#undef EAST
#undef FIRST_LINE_END
#undef FIRST_LINE_START
#undef HORIZONTAL
#undef LAST_LINE_END
#undef LAST_LINE_START
#undef LINE_END
#undef LINE_START
#undef NONE
#undef NORTH
#undef NORTHEAST
#undef NORTHWEST
#undef PAGE_END
#undef PAGE_START
#undef RELATIVE
#undef REMAINDER
#undef SOUTH
#undef SOUTHEAST
#undef SOUTHWEST
#undef VERTICAL
#undef WEST

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Insets = ::java::awt::Insets;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GridBagConstraints_FieldInfo_[] = {
	{"RELATIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, RELATIVE)},
	{"REMAINDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, REMAINDER)},
	{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, NONE)},
	{"BOTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, BOTH)},
	{"HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, HORIZONTAL)},
	{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, VERTICAL)},
	{"CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, CENTER)},
	{"NORTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, NORTH)},
	{"NORTHEAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, NORTHEAST)},
	{"EAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, EAST)},
	{"SOUTHEAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, SOUTHEAST)},
	{"SOUTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, SOUTH)},
	{"SOUTHWEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, SOUTHWEST)},
	{"WEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, WEST)},
	{"NORTHWEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, NORTHWEST)},
	{"PAGE_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, PAGE_START)},
	{"PAGE_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, PAGE_END)},
	{"LINE_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, LINE_START)},
	{"LINE_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, LINE_END)},
	{"FIRST_LINE_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, FIRST_LINE_START)},
	{"FIRST_LINE_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, FIRST_LINE_END)},
	{"LAST_LINE_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, LAST_LINE_START)},
	{"LAST_LINE_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, LAST_LINE_END)},
	{"BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, BASELINE)},
	{"BASELINE_LEADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, BASELINE_LEADING)},
	{"BASELINE_TRAILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, BASELINE_TRAILING)},
	{"ABOVE_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, ABOVE_BASELINE)},
	{"ABOVE_BASELINE_LEADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, ABOVE_BASELINE_LEADING)},
	{"ABOVE_BASELINE_TRAILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, ABOVE_BASELINE_TRAILING)},
	{"BELOW_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, BELOW_BASELINE)},
	{"BELOW_BASELINE_LEADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, BELOW_BASELINE_LEADING)},
	{"BELOW_BASELINE_TRAILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GridBagConstraints, BELOW_BASELINE_TRAILING)},
	{"gridx", "I", nullptr, $PUBLIC, $field(GridBagConstraints, gridx)},
	{"gridy", "I", nullptr, $PUBLIC, $field(GridBagConstraints, gridy)},
	{"gridwidth", "I", nullptr, $PUBLIC, $field(GridBagConstraints, gridwidth)},
	{"gridheight", "I", nullptr, $PUBLIC, $field(GridBagConstraints, gridheight)},
	{"weightx", "D", nullptr, $PUBLIC, $field(GridBagConstraints, weightx)},
	{"weighty", "D", nullptr, $PUBLIC, $field(GridBagConstraints, weighty)},
	{"anchor", "I", nullptr, $PUBLIC, $field(GridBagConstraints, anchor)},
	{"fill", "I", nullptr, $PUBLIC, $field(GridBagConstraints, fill)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PUBLIC, $field(GridBagConstraints, insets)},
	{"ipadx", "I", nullptr, $PUBLIC, $field(GridBagConstraints, ipadx)},
	{"ipady", "I", nullptr, $PUBLIC, $field(GridBagConstraints, ipady)},
	{"tempX", "I", nullptr, 0, $field(GridBagConstraints, tempX)},
	{"tempY", "I", nullptr, 0, $field(GridBagConstraints, tempY)},
	{"tempWidth", "I", nullptr, 0, $field(GridBagConstraints, tempWidth)},
	{"tempHeight", "I", nullptr, 0, $field(GridBagConstraints, tempHeight)},
	{"minWidth", "I", nullptr, 0, $field(GridBagConstraints, minWidth)},
	{"minHeight", "I", nullptr, 0, $field(GridBagConstraints, minHeight)},
	{"ascent", "I", nullptr, $TRANSIENT, $field(GridBagConstraints, ascent)},
	{"descent", "I", nullptr, $TRANSIENT, $field(GridBagConstraints, descent)},
	{"baselineResizeBehavior", "Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $TRANSIENT, $field(GridBagConstraints, baselineResizeBehavior)},
	{"centerPadding", "I", nullptr, $TRANSIENT, $field(GridBagConstraints, centerPadding)},
	{"centerOffset", "I", nullptr, $TRANSIENT, $field(GridBagConstraints, centerOffset)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GridBagConstraints, serialVersionUID)},
	{}
};

$MethodInfo _GridBagConstraints_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GridBagConstraints::*)()>(&GridBagConstraints::init$))},
	{"<init>", "(IIIIDDIILjava/awt/Insets;II)V", nullptr, $PUBLIC, $method(static_cast<void(GridBagConstraints::*)(int32_t,int32_t,int32_t,int32_t,double,double,int32_t,int32_t,$Insets*,int32_t,int32_t)>(&GridBagConstraints::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isVerticallyResizable", "()Z", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GridBagConstraints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.GridBagConstraints",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	_GridBagConstraints_FieldInfo_,
	_GridBagConstraints_MethodInfo_
};

$Object* allocate$GridBagConstraints($Class* clazz) {
	return $of($alloc(GridBagConstraints));
}

int32_t GridBagConstraints::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool GridBagConstraints::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$String* GridBagConstraints::toString() {
	 return this->$Cloneable::toString();
}

void GridBagConstraints::finalize() {
	this->$Cloneable::finalize();
}

void GridBagConstraints::init$() {
	this->gridx = GridBagConstraints::RELATIVE;
	this->gridy = GridBagConstraints::RELATIVE;
	this->gridwidth = 1;
	this->gridheight = 1;
	this->weightx = (double)0;
	this->weighty = (double)0;
	this->anchor = GridBagConstraints::CENTER;
	this->fill = GridBagConstraints::NONE;
	$set(this, insets, $new($Insets, 0, 0, 0, 0));
	this->ipadx = 0;
	this->ipady = 0;
}

void GridBagConstraints::init$(int32_t gridx, int32_t gridy, int32_t gridwidth, int32_t gridheight, double weightx, double weighty, int32_t anchor, int32_t fill, $Insets* insets, int32_t ipadx, int32_t ipady) {
	this->gridx = gridx;
	this->gridy = gridy;
	this->gridwidth = gridwidth;
	this->gridheight = gridheight;
	this->fill = fill;
	this->ipadx = ipadx;
	this->ipady = ipady;
	$set(this, insets, insets);
	this->anchor = anchor;
	this->weightx = weightx;
	this->weighty = weighty;
}

$Object* GridBagConstraints::clone() {
	try {
		$var(GridBagConstraints, c, $cast(GridBagConstraints, $Cloneable::clone()));
		$set($nc(c), insets, $cast($Insets, $nc(this->insets)->clone()));
		return $of(c);
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

bool GridBagConstraints::isVerticallyResizable() {
	return (this->fill == GridBagConstraints::BOTH || this->fill == GridBagConstraints::VERTICAL);
}

GridBagConstraints::GridBagConstraints() {
}

$Class* GridBagConstraints::load$($String* name, bool initialize) {
	$loadClass(GridBagConstraints, name, initialize, &_GridBagConstraints_ClassInfo_, allocate$GridBagConstraints);
	return class$;
}

$Class* GridBagConstraints::class$ = nullptr;

	} // awt
} // java