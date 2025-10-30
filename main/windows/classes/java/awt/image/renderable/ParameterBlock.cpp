#include <java/awt/image/renderable/ParameterBlock.h>

#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/lang/Cloneable.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef TYPE

using $RenderedImage = ::java::awt::image::RenderedImage;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $Serializable = ::java::io::Serializable;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$FieldInfo _ParameterBlock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParameterBlock, serialVersionUID)},
	{"sources", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PROTECTED, $field(ParameterBlock, sources)},
	{"parameters", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PROTECTED, $field(ParameterBlock, parameters)},
	{}
};

$MethodInfo _ParameterBlock_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParameterBlock::*)()>(&ParameterBlock::init$))},
	{"<init>", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(ParameterBlock::*)($Vector*)>(&ParameterBlock::init$))},
	{"<init>", "(Ljava/util/Vector;Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(ParameterBlock::*)($Vector*,$Vector*)>(&ParameterBlock::init$))},
	{"add", "(Ljava/lang/Object;)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"add", "(B)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"add", "(C)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"add", "(S)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"add", "(I)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"add", "(J)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"add", "(F)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"add", "(D)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"addSource", "(Ljava/lang/Object;)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getByteParameter", "(I)B", nullptr, $PUBLIC},
	{"getCharParameter", "(I)C", nullptr, $PUBLIC},
	{"getDoubleParameter", "(I)D", nullptr, $PUBLIC},
	{"getFloatParameter", "(I)F", nullptr, $PUBLIC},
	{"getIntParameter", "(I)I", nullptr, $PUBLIC},
	{"getLongParameter", "(I)J", nullptr, $PUBLIC},
	{"getNumParameters", "()I", nullptr, $PUBLIC},
	{"getNumSources", "()I", nullptr, $PUBLIC},
	{"getObjectParameter", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getParamClasses", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC},
	{"getParameters", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/Object;>;", $PUBLIC},
	{"getRenderableSource", "(I)Ljava/awt/image/renderable/RenderableImage;", nullptr, $PUBLIC},
	{"getRenderedSource", "(I)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC},
	{"getShortParameter", "(I)S", nullptr, $PUBLIC},
	{"getSource", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/Object;>;", $PUBLIC},
	{"removeParameters", "()V", nullptr, $PUBLIC},
	{"removeSources", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;I)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"set", "(BI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"set", "(CI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"set", "(SI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"set", "(II)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"set", "(JI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"set", "(FI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"set", "(DI)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"setParameters", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC},
	{"setSource", "(Ljava/lang/Object;I)Ljava/awt/image/renderable/ParameterBlock;", nullptr, $PUBLIC},
	{"setSources", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljava/lang/Object;>;)V", $PUBLIC},
	{"shallowClone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ParameterBlock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.renderable.ParameterBlock",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	_ParameterBlock_FieldInfo_,
	_ParameterBlock_MethodInfo_
};

$Object* allocate$ParameterBlock($Class* clazz) {
	return $of($alloc(ParameterBlock));
}

int32_t ParameterBlock::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool ParameterBlock::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$String* ParameterBlock::toString() {
	 return this->$Cloneable::toString();
}

void ParameterBlock::finalize() {
	this->$Cloneable::finalize();
}

void ParameterBlock::init$() {
	$set(this, sources, $new($Vector));
	$set(this, parameters, $new($Vector));
}

void ParameterBlock::init$($Vector* sources) {
	$set(this, sources, $new($Vector));
	$set(this, parameters, $new($Vector));
	setSources(sources);
}

void ParameterBlock::init$($Vector* sources, $Vector* parameters) {
	$set(this, sources, $new($Vector));
	$set(this, parameters, $new($Vector));
	setSources(sources);
	setParameters(parameters);
}

$Object* ParameterBlock::shallowClone() {
	try {
		return $of($Cloneable::clone());
	} catch ($Exception& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$Object* ParameterBlock::clone() {
	$useLocalCurrentObjectStackCache();
	$var(ParameterBlock, theClone, nullptr);
	try {
		$assign(theClone, $cast(ParameterBlock, $Cloneable::clone()));
	} catch ($Exception& e) {
		return $of(nullptr);
	}
	if (this->sources != nullptr) {
		$nc(theClone)->setSources($cast($Vector, $($nc(this->sources)->clone())));
	}
	if (this->parameters != nullptr) {
		$nc(theClone)->setParameters($cast($Vector, $($nc(this->parameters)->clone())));
	}
	return $of($of(theClone));
}

ParameterBlock* ParameterBlock::addSource(Object$* source) {
	$nc(this->sources)->addElement(source);
	return this;
}

$Object* ParameterBlock::getSource(int32_t index) {
	return $of($nc(this->sources)->elementAt(index));
}

ParameterBlock* ParameterBlock::setSource(Object$* source, int32_t index) {
	int32_t oldSize = $nc(this->sources)->size();
	int32_t newSize = index + 1;
	if (oldSize < newSize) {
		$nc(this->sources)->setSize(newSize);
	}
	$nc(this->sources)->setElementAt(source, index);
	return this;
}

$RenderedImage* ParameterBlock::getRenderedSource(int32_t index) {
	return $cast($RenderedImage, $nc(this->sources)->elementAt(index));
}

$RenderableImage* ParameterBlock::getRenderableSource(int32_t index) {
	return $cast($RenderableImage, $nc(this->sources)->elementAt(index));
}

int32_t ParameterBlock::getNumSources() {
	return $nc(this->sources)->size();
}

$Vector* ParameterBlock::getSources() {
	return this->sources;
}

void ParameterBlock::setSources($Vector* sources) {
	$set(this, sources, sources);
}

void ParameterBlock::removeSources() {
	$set(this, sources, $new($Vector));
}

int32_t ParameterBlock::getNumParameters() {
	return $nc(this->parameters)->size();
}

$Vector* ParameterBlock::getParameters() {
	return this->parameters;
}

void ParameterBlock::setParameters($Vector* parameters) {
	$set(this, parameters, parameters);
}

void ParameterBlock::removeParameters() {
	$set(this, parameters, $new($Vector));
}

ParameterBlock* ParameterBlock::add(Object$* obj) {
	$nc(this->parameters)->addElement(obj);
	return this;
}

ParameterBlock* ParameterBlock::add(int8_t b) {
	return add($($of($Byte::valueOf(b))));
}

ParameterBlock* ParameterBlock::add(char16_t c) {
	return add($($of($Character::valueOf(c))));
}

ParameterBlock* ParameterBlock::add(int16_t s) {
	return add($($of($Short::valueOf(s))));
}

ParameterBlock* ParameterBlock::add(int32_t i) {
	return add($($of($Integer::valueOf(i))));
}

ParameterBlock* ParameterBlock::add(int64_t l) {
	return add($($of($Long::valueOf(l))));
}

ParameterBlock* ParameterBlock::add(float f) {
	return add($($of($Float::valueOf(f))));
}

ParameterBlock* ParameterBlock::add(double d) {
	return add($($of($Double::valueOf(d))));
}

ParameterBlock* ParameterBlock::set(Object$* obj, int32_t index) {
	int32_t oldSize = $nc(this->parameters)->size();
	int32_t newSize = index + 1;
	if (oldSize < newSize) {
		$nc(this->parameters)->setSize(newSize);
	}
	$nc(this->parameters)->setElementAt(obj, index);
	return this;
}

ParameterBlock* ParameterBlock::set(int8_t b, int32_t index) {
	return set($($of($Byte::valueOf(b))), index);
}

ParameterBlock* ParameterBlock::set(char16_t c, int32_t index) {
	return set($($of($Character::valueOf(c))), index);
}

ParameterBlock* ParameterBlock::set(int16_t s, int32_t index) {
	return set($($of($Short::valueOf(s))), index);
}

ParameterBlock* ParameterBlock::set(int32_t i, int32_t index) {
	return set($($of($Integer::valueOf(i))), index);
}

ParameterBlock* ParameterBlock::set(int64_t l, int32_t index) {
	return set($($of($Long::valueOf(l))), index);
}

ParameterBlock* ParameterBlock::set(float f, int32_t index) {
	return set($($of($Float::valueOf(f))), index);
}

ParameterBlock* ParameterBlock::set(double d, int32_t index) {
	return set($($of($Double::valueOf(d))), index);
}

$Object* ParameterBlock::getObjectParameter(int32_t index) {
	return $of($nc(this->parameters)->elementAt(index));
}

int8_t ParameterBlock::getByteParameter(int32_t index) {
	return $nc(($cast($Byte, $($nc(this->parameters)->elementAt(index)))))->byteValue();
}

char16_t ParameterBlock::getCharParameter(int32_t index) {
	return $nc(($cast($Character, $($nc(this->parameters)->elementAt(index)))))->charValue();
}

int16_t ParameterBlock::getShortParameter(int32_t index) {
	return $nc(($cast($Short, $($nc(this->parameters)->elementAt(index)))))->shortValue();
}

int32_t ParameterBlock::getIntParameter(int32_t index) {
	return $nc(($cast($Integer, $($nc(this->parameters)->elementAt(index)))))->intValue();
}

int64_t ParameterBlock::getLongParameter(int32_t index) {
	return $nc(($cast($Long, $($nc(this->parameters)->elementAt(index)))))->longValue();
}

float ParameterBlock::getFloatParameter(int32_t index) {
	return $nc(($cast($Float, $($nc(this->parameters)->elementAt(index)))))->floatValue();
}

double ParameterBlock::getDoubleParameter(int32_t index) {
	return $nc(($cast($Double, $($nc(this->parameters)->elementAt(index)))))->doubleValue();
}

$ClassArray* ParameterBlock::getParamClasses() {
	$useLocalCurrentObjectStackCache();
	int32_t numParams = getNumParameters();
	$var($ClassArray, classes, $new($ClassArray, numParams));
	int32_t i = 0;
	for (i = 0; i < numParams; ++i) {
		$var($Object, obj, getObjectParameter(i));
		if ($instanceOf($Byte, obj)) {
			$init($Byte);
			classes->set(i, $Byte::TYPE);
		} else if ($instanceOf($Character, obj)) {
			$init($Character);
			classes->set(i, $Character::TYPE);
		} else if ($instanceOf($Short, obj)) {
			$init($Short);
			classes->set(i, $Short::TYPE);
		} else if ($instanceOf($Integer, obj)) {
			$init($Integer);
			classes->set(i, $Integer::TYPE);
		} else if ($instanceOf($Long, obj)) {
			$init($Long);
			classes->set(i, $Long::TYPE);
		} else if ($instanceOf($Float, obj)) {
			$init($Float);
			classes->set(i, $Float::TYPE);
		} else if ($instanceOf($Double, obj)) {
			$init($Double);
			classes->set(i, $Double::TYPE);
		} else {
			classes->set(i, $nc($of(obj))->getClass());
		}
	}
	return classes;
}

ParameterBlock::ParameterBlock() {
}

$Class* ParameterBlock::load$($String* name, bool initialize) {
	$loadClass(ParameterBlock, name, initialize, &_ParameterBlock_ClassInfo_, allocate$ParameterBlock);
	return class$;
}

$Class* ParameterBlock::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java