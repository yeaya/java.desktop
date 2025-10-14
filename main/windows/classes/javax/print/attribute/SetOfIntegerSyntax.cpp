#include <javax/print/attribute/SetOfIntegerSyntax.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $Serializable = ::java::io::Serializable;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _SetOfIntegerSyntax_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SetOfIntegerSyntax, serialVersionUID)},
	{"members", "[[I", nullptr, $PRIVATE, $field(SetOfIntegerSyntax, members)},
	{}
};

$MethodInfo _SetOfIntegerSyntax_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(SetOfIntegerSyntax::*)($String*)>(&SetOfIntegerSyntax::init$))},
	{"<init>", "([[I)V", nullptr, $PROTECTED, $method(static_cast<void(SetOfIntegerSyntax::*)($intArray2*)>(&SetOfIntegerSyntax::init$))},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(SetOfIntegerSyntax::*)(int32_t)>(&SetOfIntegerSyntax::init$))},
	{"<init>", "(II)V", nullptr, $PROTECTED, $method(static_cast<void(SetOfIntegerSyntax::*)(int32_t,int32_t)>(&SetOfIntegerSyntax::init$))},
	{"accumulate", "(Ljava/util/Vector;II)V", "(Ljava/util/Vector<[I>;II)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Vector*,int32_t,int32_t)>(&SetOfIntegerSyntax::accumulate))},
	{"canonicalArrayForm", "(Ljava/util/Vector;)[[I", "(Ljava/util/Vector<[I>;)[[I", $PRIVATE | $STATIC, $method(static_cast<$intArray2*(*)($Vector*)>(&SetOfIntegerSyntax::canonicalArrayForm))},
	{"contains", "(I)Z", nullptr, $PUBLIC},
	{"contains", "(Ljavax/print/attribute/IntegerSyntax;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getMembers", "()[[I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"next", "(I)I", nullptr, $PUBLIC},
	{"parse", "(Ljava/lang/String;)[[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$intArray2*(*)($String*)>(&SetOfIntegerSyntax::parse))},
	{"parse", "([[I)[[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$intArray2*(*)($intArray2*)>(&SetOfIntegerSyntax::parse))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SetOfIntegerSyntax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.SetOfIntegerSyntax",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_SetOfIntegerSyntax_FieldInfo_,
	_SetOfIntegerSyntax_MethodInfo_
};

$Object* allocate$SetOfIntegerSyntax($Class* clazz) {
	return $of($alloc(SetOfIntegerSyntax));
}

$Object* SetOfIntegerSyntax::clone() {
	 return this->$Serializable::clone();
}

void SetOfIntegerSyntax::finalize() {
	this->$Serializable::finalize();
}

void SetOfIntegerSyntax::init$($String* members) {
	$set(this, members, parse(members));
}

$intArray2* SetOfIntegerSyntax::parse($String* members) {
	$init(SetOfIntegerSyntax);
	$var($Vector, theRanges, $new($Vector));
	int32_t n = (members == nullptr ? 0 : $nc(members)->length());
	int32_t i = 0;
	int32_t state = 0;
	int32_t lb = 0;
	int32_t ub = 0;
	char16_t c = 0;
	int32_t digit = 0;
	while (i < n) {
		c = members->charAt(i++);
		switch (state) {
		case 0:
			{
				if ($Character::isWhitespace(c)) {
					state = 0;
				} else if ((digit = $Character::digit(c, 10)) != -1) {
					lb = digit;
					state = 1;
				} else {
					$throwNew($IllegalArgumentException);
				}
				break;
			}
		case 1:
			{
				if ($Character::isWhitespace(c)) {
					state = 2;
				} else if ((digit = $Character::digit(c, 10)) != -1) {
					lb = 10 * lb + digit;
					state = 1;
				} else if (c == u'-' || c == u':') {
					state = 3;
				} else if (c == u',') {
					accumulate(theRanges, lb, lb);
					state = 6;
				} else {
					$throwNew($IllegalArgumentException);
				}
				break;
			}
		case 2:
			{
				if ($Character::isWhitespace(c)) {
					state = 2;
				} else if (c == u'-' || c == u':') {
					state = 3;
				} else if (c == u',') {
					accumulate(theRanges, lb, lb);
					state = 6;
				} else {
					$throwNew($IllegalArgumentException);
				}
				break;
			}
		case 3:
			{
				if ($Character::isWhitespace(c)) {
					state = 3;
				} else if ((digit = $Character::digit(c, 10)) != -1) {
					ub = digit;
					state = 4;
				} else {
					$throwNew($IllegalArgumentException);
				}
				break;
			}
		case 4:
			{
				if ($Character::isWhitespace(c)) {
					state = 5;
				} else if ((digit = $Character::digit(c, 10)) != -1) {
					ub = 10 * ub + digit;
					state = 4;
				} else if (c == u',') {
					accumulate(theRanges, lb, ub);
					state = 6;
				} else {
					$throwNew($IllegalArgumentException);
				}
				break;
			}
		case 5:
			{
				if ($Character::isWhitespace(c)) {
					state = 5;
				} else if (c == u',') {
					accumulate(theRanges, lb, ub);
					state = 6;
				} else {
					$throwNew($IllegalArgumentException);
				}
				break;
			}
		case 6:
			{
				if ($Character::isWhitespace(c)) {
					state = 6;
				} else if ((digit = $Character::digit(c, 10)) != -1) {
					lb = digit;
					state = 1;
				} else {
					$throwNew($IllegalArgumentException);
				}
				break;
			}
		}
	}
	switch (state) {
	case 0:
		{
			break;
		}
	case 1:
		{}
	case 2:
		{
			accumulate(theRanges, lb, lb);
			break;
		}
	case 4:
		{}
	case 5:
		{
			accumulate(theRanges, lb, ub);
			break;
		}
	case 3:
		{}
	case 6:
		{
			$throwNew($IllegalArgumentException);
		}
	}
	return canonicalArrayForm(theRanges);
}

void SetOfIntegerSyntax::accumulate($Vector* ranges, int32_t lb, int32_t ub) {
	$init(SetOfIntegerSyntax);
	if (lb <= ub) {
		$nc(ranges)->add($$new($ints, {
			lb,
			ub
		}));
		for (int32_t j = ranges->size() - 2; j >= 0; --j) {
			$var($ints, rangea, $cast($ints, ranges->elementAt(j)));
			int32_t lba = $nc(rangea)->get(0);
			int32_t uba = rangea->get(1);
			$var($ints, rangeb, $cast($ints, ranges->elementAt(j + 1)));
			int32_t lbb = $nc(rangeb)->get(0);
			int32_t ubb = rangeb->get(1);
			int32_t var$0 = $Math::max(lba, lbb);
			if (var$0 - $Math::min(uba, ubb) <= 1) {
				ranges->setElementAt($$new($ints, {
					$Math::min(lba, lbb),
					$Math::max(uba, ubb)
				}), j);
				ranges->remove(j + 1);
			} else if (lba > lbb) {
				ranges->setElementAt(rangeb, j);
				ranges->setElementAt(rangea, j + 1);
			} else {
				break;
			}
		}
	}
}

$intArray2* SetOfIntegerSyntax::canonicalArrayForm($Vector* ranges) {
	$init(SetOfIntegerSyntax);
	return $fcast($intArray2, $nc(ranges)->toArray(static_cast<$ObjectArray*>(static_cast<$Object*>(static_cast<$intArray2*>($$new($intArray2, ranges->size()))))));
}

void SetOfIntegerSyntax::init$($intArray2* members) {
	$set(this, members, parse(members));
}

$intArray2* SetOfIntegerSyntax::parse($intArray2* members) {
	$init(SetOfIntegerSyntax);
	$var($Vector, ranges, $new($Vector));
	int32_t n = (members == nullptr ? 0 : $nc(members)->length);
	for (int32_t i = 0; i < n; ++i) {
		int32_t lb = 0;
		int32_t ub = 0;
		if ($nc(members->get(i))->length == 1) {
			lb = (ub = $nc(members->get(i))->get(0));
		} else if ($nc(members->get(i))->length == 2) {
			lb = $nc(members->get(i))->get(0);
			ub = $nc(members->get(i))->get(1);
		} else {
			$throwNew($IllegalArgumentException);
		}
		if (lb <= ub && lb < 0) {
			$throwNew($IllegalArgumentException);
		}
		accumulate(ranges, lb, ub);
	}
	return canonicalArrayForm(ranges);
}

void SetOfIntegerSyntax::init$(int32_t member) {
	if (member < 0) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, members, $new($intArray2, {$$new($ints, {
		member,
		member
	})}));
}

void SetOfIntegerSyntax::init$(int32_t lowerBound, int32_t upperBound) {
	if (lowerBound <= upperBound && lowerBound < 0) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, members, lowerBound <= upperBound ? $new($intArray2, {$$new($ints, {
		lowerBound,
		upperBound
	})}) : $new($intArray2, 0));
}

$intArray2* SetOfIntegerSyntax::getMembers() {
	int32_t n = $nc(this->members)->length;
	$var($intArray2, result, $new($intArray2, n));
	for (int32_t i = 0; i < n; ++i) {
		result->set(i, $$new($ints, {
			$nc($nc(this->members)->get(i))->get(0),
			$nc($nc(this->members)->get(i))->get(1)
		}));
	}
	return result;
}

bool SetOfIntegerSyntax::contains(int32_t x) {
	int32_t n = $nc(this->members)->length;
	for (int32_t i = 0; i < n; ++i) {
		if (x < $nc($nc(this->members)->get(i))->get(0)) {
			return false;
		} else if (x <= $nc($nc(this->members)->get(i))->get(1)) {
			return true;
		}
	}
	return false;
}

bool SetOfIntegerSyntax::contains($IntegerSyntax* attribute) {
	return contains($nc(attribute)->getValue());
}

int32_t SetOfIntegerSyntax::next(int32_t x) {
	int32_t n = $nc(this->members)->length;
	for (int32_t i = 0; i < n; ++i) {
		if (x < $nc($nc(this->members)->get(i))->get(0)) {
			return $nc($nc(this->members)->get(i))->get(0);
		} else if (x < $nc($nc(this->members)->get(i))->get(1)) {
			return x + 1;
		}
	}
	return -1;
}

bool SetOfIntegerSyntax::equals(Object$* object) {
	if (object != nullptr && $instanceOf(SetOfIntegerSyntax, object)) {
		$var($intArray2, myMembers, this->members);
		$var($intArray2, otherMembers, $nc(($cast(SetOfIntegerSyntax, object)))->members);
		int32_t m = $nc(myMembers)->length;
		int32_t n = $nc(otherMembers)->length;
		if (m == n) {
			for (int32_t i = 0; i < m; ++i) {
				if ($nc(myMembers->get(i))->get(0) != $nc(otherMembers->get(i))->get(0) || $nc(myMembers->get(i))->get(1) != $nc(otherMembers->get(i))->get(1)) {
					return false;
				}
			}
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

int32_t SetOfIntegerSyntax::hashCode() {
	int32_t result = 0;
	int32_t n = $nc(this->members)->length;
	for (int32_t i = 0; i < n; ++i) {
		result += $nc($nc(this->members)->get(i))->get(0) + $nc($nc(this->members)->get(i))->get(1);
	}
	return result;
}

$String* SetOfIntegerSyntax::toString() {
	$var($StringBuilder, result, $new($StringBuilder));
	int32_t n = $nc(this->members)->length;
	for (int32_t i = 0; i < n; ++i) {
		if (i > 0) {
			result->append(u',');
		}
		result->append($nc($nc(this->members)->get(i))->get(0));
		if ($nc($nc(this->members)->get(i))->get(0) != $nc($nc(this->members)->get(i))->get(1)) {
			result->append(u'-');
			result->append($nc($nc(this->members)->get(i))->get(1));
		}
	}
	return result->toString();
}

SetOfIntegerSyntax::SetOfIntegerSyntax() {
}

$Class* SetOfIntegerSyntax::load$($String* name, bool initialize) {
	$loadClass(SetOfIntegerSyntax, name, initialize, &_SetOfIntegerSyntax_ClassInfo_, allocate$SetOfIntegerSyntax);
	return class$;
}

$Class* SetOfIntegerSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax