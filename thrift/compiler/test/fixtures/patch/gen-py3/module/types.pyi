#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import patch.types as _patch_types


__property__ = property


class MyData(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        data1: bool
        data2: bool
        pass

    data1: Final[str] = ...

    data2: Final[int] = ...

    def __init__(
        self, *,
        data1: _typing.Optional[str]=None,
        data2: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        data1: _typing.Union[str, '__NotSet', None]=NOTSET,
        data2: _typing.Union[int, '__NotSet', None]=NOTSET
    ) -> MyData: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyData'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyData') -> bool: ...
    def __gt__(self, other: 'MyData') -> bool: ...
    def __le__(self, other: 'MyData') -> bool: ...
    def __ge__(self, other: 'MyData') -> bool: ...


class MyStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        boolVal: bool
        byteVal: bool
        i16Val: bool
        i32Val: bool
        i64Val: bool
        floatVal: bool
        doubleVal: bool
        stringVal: bool
        binaryVal: bool
        structVal: bool
        optBoolVal: bool
        optByteVal: bool
        optI16Val: bool
        optI32Val: bool
        optI64Val: bool
        optFloatVal: bool
        optDoubleVal: bool
        optStringVal: bool
        optBinaryVal: bool
        optStructVal: bool
        optListVal: bool
        optSetVal: bool
        optMapVal: bool
        pass

    boolVal: Final[bool] = ...

    byteVal: Final[int] = ...

    i16Val: Final[int] = ...

    i32Val: Final[int] = ...

    i64Val: Final[int] = ...

    floatVal: Final[float] = ...

    doubleVal: Final[float] = ...

    stringVal: Final[str] = ...

    binaryVal: Final[bytes] = ...

    structVal: Final[MyData] = ...

    optBoolVal: Final[_typing.Optional[bool]] = ...

    optByteVal: Final[_typing.Optional[int]] = ...

    optI16Val: Final[_typing.Optional[int]] = ...

    optI32Val: Final[_typing.Optional[int]] = ...

    optI64Val: Final[_typing.Optional[int]] = ...

    optFloatVal: Final[_typing.Optional[float]] = ...

    optDoubleVal: Final[_typing.Optional[float]] = ...

    optStringVal: Final[_typing.Optional[str]] = ...

    optBinaryVal: Final[_typing.Optional[bytes]] = ...

    optStructVal: Final[_typing.Optional[MyData]] = ...

    optListVal: Final[_typing.Optional[_typing.Sequence[int]]] = ...

    optSetVal: Final[_typing.Optional[_typing.AbstractSet[str]]] = ...

    optMapVal: Final[_typing.Optional[_typing.Mapping[str, str]]] = ...

    def __init__(
        self, *,
        boolVal: _typing.Optional[bool]=None,
        byteVal: _typing.Optional[int]=None,
        i16Val: _typing.Optional[int]=None,
        i32Val: _typing.Optional[int]=None,
        i64Val: _typing.Optional[int]=None,
        floatVal: _typing.Optional[float]=None,
        doubleVal: _typing.Optional[float]=None,
        stringVal: _typing.Optional[str]=None,
        binaryVal: _typing.Optional[bytes]=None,
        structVal: _typing.Optional[MyData]=None,
        optBoolVal: _typing.Optional[bool]=None,
        optByteVal: _typing.Optional[int]=None,
        optI16Val: _typing.Optional[int]=None,
        optI32Val: _typing.Optional[int]=None,
        optI64Val: _typing.Optional[int]=None,
        optFloatVal: _typing.Optional[float]=None,
        optDoubleVal: _typing.Optional[float]=None,
        optStringVal: _typing.Optional[str]=None,
        optBinaryVal: _typing.Optional[bytes]=None,
        optStructVal: _typing.Optional[MyData]=None,
        optListVal: _typing.Optional[_typing.Sequence[int]]=None,
        optSetVal: _typing.Optional[_typing.AbstractSet[str]]=None,
        optMapVal: _typing.Optional[_typing.Mapping[str, str]]=None
    ) -> None: ...

    def __call__(
        self, *,
        boolVal: _typing.Union[bool, '__NotSet', None]=NOTSET,
        byteVal: _typing.Union[int, '__NotSet', None]=NOTSET,
        i16Val: _typing.Union[int, '__NotSet', None]=NOTSET,
        i32Val: _typing.Union[int, '__NotSet', None]=NOTSET,
        i64Val: _typing.Union[int, '__NotSet', None]=NOTSET,
        floatVal: _typing.Union[float, '__NotSet', None]=NOTSET,
        doubleVal: _typing.Union[float, '__NotSet', None]=NOTSET,
        stringVal: _typing.Union[str, '__NotSet', None]=NOTSET,
        binaryVal: _typing.Union[bytes, '__NotSet', None]=NOTSET,
        structVal: _typing.Union[MyData, '__NotSet', None]=NOTSET,
        optBoolVal: _typing.Union[bool, '__NotSet', None]=NOTSET,
        optByteVal: _typing.Union[int, '__NotSet', None]=NOTSET,
        optI16Val: _typing.Union[int, '__NotSet', None]=NOTSET,
        optI32Val: _typing.Union[int, '__NotSet', None]=NOTSET,
        optI64Val: _typing.Union[int, '__NotSet', None]=NOTSET,
        optFloatVal: _typing.Union[float, '__NotSet', None]=NOTSET,
        optDoubleVal: _typing.Union[float, '__NotSet', None]=NOTSET,
        optStringVal: _typing.Union[str, '__NotSet', None]=NOTSET,
        optBinaryVal: _typing.Union[bytes, '__NotSet', None]=NOTSET,
        optStructVal: _typing.Union[MyData, '__NotSet', None]=NOTSET,
        optListVal: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET,
        optSetVal: _typing.Union[_typing.AbstractSet[str], '__NotSet', None]=NOTSET,
        optMapVal: _typing.Union[_typing.Mapping[str, str], '__NotSet', None]=NOTSET
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStruct') -> bool: ...
    def __gt__(self, other: 'MyStruct') -> bool: ...
    def __le__(self, other: 'MyStruct') -> bool: ...
    def __ge__(self, other: 'MyStruct') -> bool: ...


class MyDataPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        data1: bool
        data2: bool
        pass

    data1: Final[_patch_types.StringPatch] = ...

    data2: Final[_patch_types.I32Patch] = ...

    def __init__(
        self, *,
        data1: _typing.Optional[_patch_types.StringPatch]=None,
        data2: _typing.Optional[_patch_types.I32Patch]=None
    ) -> None: ...

    def __call__(
        self, *,
        data1: _typing.Union[_patch_types.StringPatch, '__NotSet', None]=NOTSET,
        data2: _typing.Union[_patch_types.I32Patch, '__NotSet', None]=NOTSET
    ) -> MyDataPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyDataPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyDataPatch') -> bool: ...
    def __gt__(self, other: 'MyDataPatch') -> bool: ...
    def __le__(self, other: 'MyDataPatch') -> bool: ...
    def __ge__(self, other: 'MyDataPatch') -> bool: ...


class MyDataValuePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        clear: bool
        patch: bool
        pass

    assign: Final[_typing.Optional[MyData]] = ...

    clear: Final[bool] = ...

    patch: Final[MyDataPatch] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[MyData]=None,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[MyDataPatch]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[MyData, '__NotSet', None]=NOTSET,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        patch: _typing.Union[MyDataPatch, '__NotSet', None]=NOTSET
    ) -> MyDataValuePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyDataValuePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyDataValuePatch') -> bool: ...
    def __gt__(self, other: 'MyDataValuePatch') -> bool: ...
    def __le__(self, other: 'MyDataValuePatch') -> bool: ...
    def __ge__(self, other: 'MyDataValuePatch') -> bool: ...


class OptionalMyDataValuePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        clear: bool
        patch: bool
        ensure: bool
        patchAfter: bool
        pass

    clear: Final[bool] = ...

    patch: Final[MyDataValuePatch] = ...

    ensure: Final[_typing.Optional[MyData]] = ...

    patchAfter: Final[MyDataValuePatch] = ...

    def __init__(
        self, *,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[MyDataValuePatch]=None,
        ensure: _typing.Optional[MyData]=None,
        patchAfter: _typing.Optional[MyDataValuePatch]=None
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        patch: _typing.Union[MyDataValuePatch, '__NotSet', None]=NOTSET,
        ensure: _typing.Union[MyData, '__NotSet', None]=NOTSET,
        patchAfter: _typing.Union[MyDataValuePatch, '__NotSet', None]=NOTSET
    ) -> OptionalMyDataValuePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['OptionalMyDataValuePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'OptionalMyDataValuePatch') -> bool: ...
    def __gt__(self, other: 'OptionalMyDataValuePatch') -> bool: ...
    def __le__(self, other: 'OptionalMyDataValuePatch') -> bool: ...
    def __ge__(self, other: 'OptionalMyDataValuePatch') -> bool: ...


class MyStructPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        boolVal: bool
        byteVal: bool
        i16Val: bool
        i32Val: bool
        i64Val: bool
        floatVal: bool
        doubleVal: bool
        stringVal: bool
        binaryVal: bool
        structVal: bool
        optBoolVal: bool
        optByteVal: bool
        optI16Val: bool
        optI32Val: bool
        optI64Val: bool
        optFloatVal: bool
        optDoubleVal: bool
        optStringVal: bool
        optBinaryVal: bool
        optStructVal: bool
        optListVal: bool
        optSetVal: bool
        optMapVal: bool
        pass

    boolVal: Final[_patch_types.BoolPatch] = ...

    byteVal: Final[_patch_types.BytePatch] = ...

    i16Val: Final[_patch_types.I16Patch] = ...

    i32Val: Final[_patch_types.I32Patch] = ...

    i64Val: Final[_patch_types.I64Patch] = ...

    floatVal: Final[_patch_types.FloatPatch] = ...

    doubleVal: Final[_patch_types.DoublePatch] = ...

    stringVal: Final[_patch_types.StringPatch] = ...

    binaryVal: Final[_patch_types.BinaryPatch] = ...

    structVal: Final[MyDataValuePatch] = ...

    optBoolVal: Final[_patch_types.OptionalBoolPatch] = ...

    optByteVal: Final[_patch_types.OptionalBytePatch] = ...

    optI16Val: Final[_patch_types.OptionalI16Patch] = ...

    optI32Val: Final[_patch_types.OptionalI32Patch] = ...

    optI64Val: Final[_patch_types.OptionalI64Patch] = ...

    optFloatVal: Final[_patch_types.OptionalFloatPatch] = ...

    optDoubleVal: Final[_patch_types.OptionalDoublePatch] = ...

    optStringVal: Final[_patch_types.OptionalStringPatch] = ...

    optBinaryVal: Final[_patch_types.OptionalBinaryPatch] = ...

    optStructVal: Final[OptionalMyDataValuePatch] = ...

    optListVal: Final[OptionalMyStructField21Patch] = ...

    optSetVal: Final[OptionalMyStructField22Patch] = ...

    optMapVal: Final[OptionalMyStructField23Patch] = ...

    def __init__(
        self, *,
        boolVal: _typing.Optional[_patch_types.BoolPatch]=None,
        byteVal: _typing.Optional[_patch_types.BytePatch]=None,
        i16Val: _typing.Optional[_patch_types.I16Patch]=None,
        i32Val: _typing.Optional[_patch_types.I32Patch]=None,
        i64Val: _typing.Optional[_patch_types.I64Patch]=None,
        floatVal: _typing.Optional[_patch_types.FloatPatch]=None,
        doubleVal: _typing.Optional[_patch_types.DoublePatch]=None,
        stringVal: _typing.Optional[_patch_types.StringPatch]=None,
        binaryVal: _typing.Optional[_patch_types.BinaryPatch]=None,
        structVal: _typing.Optional[MyDataValuePatch]=None,
        optBoolVal: _typing.Optional[_patch_types.OptionalBoolPatch]=None,
        optByteVal: _typing.Optional[_patch_types.OptionalBytePatch]=None,
        optI16Val: _typing.Optional[_patch_types.OptionalI16Patch]=None,
        optI32Val: _typing.Optional[_patch_types.OptionalI32Patch]=None,
        optI64Val: _typing.Optional[_patch_types.OptionalI64Patch]=None,
        optFloatVal: _typing.Optional[_patch_types.OptionalFloatPatch]=None,
        optDoubleVal: _typing.Optional[_patch_types.OptionalDoublePatch]=None,
        optStringVal: _typing.Optional[_patch_types.OptionalStringPatch]=None,
        optBinaryVal: _typing.Optional[_patch_types.OptionalBinaryPatch]=None,
        optStructVal: _typing.Optional[OptionalMyDataValuePatch]=None,
        optListVal: _typing.Optional[OptionalMyStructField21Patch]=None,
        optSetVal: _typing.Optional[OptionalMyStructField22Patch]=None,
        optMapVal: _typing.Optional[OptionalMyStructField23Patch]=None
    ) -> None: ...

    def __call__(
        self, *,
        boolVal: _typing.Union[_patch_types.BoolPatch, '__NotSet', None]=NOTSET,
        byteVal: _typing.Union[_patch_types.BytePatch, '__NotSet', None]=NOTSET,
        i16Val: _typing.Union[_patch_types.I16Patch, '__NotSet', None]=NOTSET,
        i32Val: _typing.Union[_patch_types.I32Patch, '__NotSet', None]=NOTSET,
        i64Val: _typing.Union[_patch_types.I64Patch, '__NotSet', None]=NOTSET,
        floatVal: _typing.Union[_patch_types.FloatPatch, '__NotSet', None]=NOTSET,
        doubleVal: _typing.Union[_patch_types.DoublePatch, '__NotSet', None]=NOTSET,
        stringVal: _typing.Union[_patch_types.StringPatch, '__NotSet', None]=NOTSET,
        binaryVal: _typing.Union[_patch_types.BinaryPatch, '__NotSet', None]=NOTSET,
        structVal: _typing.Union[MyDataValuePatch, '__NotSet', None]=NOTSET,
        optBoolVal: _typing.Union[_patch_types.OptionalBoolPatch, '__NotSet', None]=NOTSET,
        optByteVal: _typing.Union[_patch_types.OptionalBytePatch, '__NotSet', None]=NOTSET,
        optI16Val: _typing.Union[_patch_types.OptionalI16Patch, '__NotSet', None]=NOTSET,
        optI32Val: _typing.Union[_patch_types.OptionalI32Patch, '__NotSet', None]=NOTSET,
        optI64Val: _typing.Union[_patch_types.OptionalI64Patch, '__NotSet', None]=NOTSET,
        optFloatVal: _typing.Union[_patch_types.OptionalFloatPatch, '__NotSet', None]=NOTSET,
        optDoubleVal: _typing.Union[_patch_types.OptionalDoublePatch, '__NotSet', None]=NOTSET,
        optStringVal: _typing.Union[_patch_types.OptionalStringPatch, '__NotSet', None]=NOTSET,
        optBinaryVal: _typing.Union[_patch_types.OptionalBinaryPatch, '__NotSet', None]=NOTSET,
        optStructVal: _typing.Union[OptionalMyDataValuePatch, '__NotSet', None]=NOTSET,
        optListVal: _typing.Union[OptionalMyStructField21Patch, '__NotSet', None]=NOTSET,
        optSetVal: _typing.Union[OptionalMyStructField22Patch, '__NotSet', None]=NOTSET,
        optMapVal: _typing.Union[OptionalMyStructField23Patch, '__NotSet', None]=NOTSET
    ) -> MyStructPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStructPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStructPatch') -> bool: ...
    def __gt__(self, other: 'MyStructPatch') -> bool: ...
    def __le__(self, other: 'MyStructPatch') -> bool: ...
    def __ge__(self, other: 'MyStructPatch') -> bool: ...


class MyStructField21Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        clear: bool
        prepend: bool
        append: bool
        pass

    assign: Final[_typing.Optional[_typing.Sequence[int]]] = ...

    clear: Final[bool] = ...

    prepend: Final[_typing.Sequence[int]] = ...

    append: Final[_typing.Sequence[int]] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[_typing.Sequence[int]]=None,
        clear: _typing.Optional[bool]=None,
        prepend: _typing.Optional[_typing.Sequence[int]]=None,
        append: _typing.Optional[_typing.Sequence[int]]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        prepend: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET,
        append: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET
    ) -> MyStructField21Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStructField21Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStructField21Patch') -> bool: ...
    def __gt__(self, other: 'MyStructField21Patch') -> bool: ...
    def __le__(self, other: 'MyStructField21Patch') -> bool: ...
    def __ge__(self, other: 'MyStructField21Patch') -> bool: ...


class OptionalMyStructField21Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        clear: bool
        patch: bool
        ensure: bool
        patchAfter: bool
        pass

    clear: Final[bool] = ...

    patch: Final[MyStructField21Patch] = ...

    ensure: Final[_typing.Optional[_typing.Sequence[int]]] = ...

    patchAfter: Final[MyStructField21Patch] = ...

    def __init__(
        self, *,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[MyStructField21Patch]=None,
        ensure: _typing.Optional[_typing.Sequence[int]]=None,
        patchAfter: _typing.Optional[MyStructField21Patch]=None
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        patch: _typing.Union[MyStructField21Patch, '__NotSet', None]=NOTSET,
        ensure: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET,
        patchAfter: _typing.Union[MyStructField21Patch, '__NotSet', None]=NOTSET
    ) -> OptionalMyStructField21Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['OptionalMyStructField21Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'OptionalMyStructField21Patch') -> bool: ...
    def __gt__(self, other: 'OptionalMyStructField21Patch') -> bool: ...
    def __le__(self, other: 'OptionalMyStructField21Patch') -> bool: ...
    def __ge__(self, other: 'OptionalMyStructField21Patch') -> bool: ...


class MyStructField22Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        clear: bool
        remove: bool
        add: bool
        pass

    assign: Final[_typing.Optional[_typing.AbstractSet[str]]] = ...

    clear: Final[bool] = ...

    remove: Final[_typing.AbstractSet[str]] = ...

    add: Final[_typing.AbstractSet[str]] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[_typing.AbstractSet[str]]=None,
        clear: _typing.Optional[bool]=None,
        remove: _typing.Optional[_typing.AbstractSet[str]]=None,
        add: _typing.Optional[_typing.AbstractSet[str]]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[_typing.AbstractSet[str], '__NotSet', None]=NOTSET,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        remove: _typing.Union[_typing.AbstractSet[str], '__NotSet', None]=NOTSET,
        add: _typing.Union[_typing.AbstractSet[str], '__NotSet', None]=NOTSET
    ) -> MyStructField22Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStructField22Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStructField22Patch') -> bool: ...
    def __gt__(self, other: 'MyStructField22Patch') -> bool: ...
    def __le__(self, other: 'MyStructField22Patch') -> bool: ...
    def __ge__(self, other: 'MyStructField22Patch') -> bool: ...


class OptionalMyStructField22Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        clear: bool
        patch: bool
        ensure: bool
        patchAfter: bool
        pass

    clear: Final[bool] = ...

    patch: Final[MyStructField22Patch] = ...

    ensure: Final[_typing.Optional[_typing.AbstractSet[str]]] = ...

    patchAfter: Final[MyStructField22Patch] = ...

    def __init__(
        self, *,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[MyStructField22Patch]=None,
        ensure: _typing.Optional[_typing.AbstractSet[str]]=None,
        patchAfter: _typing.Optional[MyStructField22Patch]=None
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        patch: _typing.Union[MyStructField22Patch, '__NotSet', None]=NOTSET,
        ensure: _typing.Union[_typing.AbstractSet[str], '__NotSet', None]=NOTSET,
        patchAfter: _typing.Union[MyStructField22Patch, '__NotSet', None]=NOTSET
    ) -> OptionalMyStructField22Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['OptionalMyStructField22Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'OptionalMyStructField22Patch') -> bool: ...
    def __gt__(self, other: 'OptionalMyStructField22Patch') -> bool: ...
    def __le__(self, other: 'OptionalMyStructField22Patch') -> bool: ...
    def __ge__(self, other: 'OptionalMyStructField22Patch') -> bool: ...


class MyStructField23Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        clear: bool
        put: bool
        pass

    assign: Final[_typing.Optional[_typing.Mapping[str, str]]] = ...

    clear: Final[bool] = ...

    put: Final[_typing.Mapping[str, str]] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[_typing.Mapping[str, str]]=None,
        clear: _typing.Optional[bool]=None,
        put: _typing.Optional[_typing.Mapping[str, str]]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[_typing.Mapping[str, str], '__NotSet', None]=NOTSET,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        put: _typing.Union[_typing.Mapping[str, str], '__NotSet', None]=NOTSET
    ) -> MyStructField23Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStructField23Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStructField23Patch') -> bool: ...
    def __gt__(self, other: 'MyStructField23Patch') -> bool: ...
    def __le__(self, other: 'MyStructField23Patch') -> bool: ...
    def __ge__(self, other: 'MyStructField23Patch') -> bool: ...


class OptionalMyStructField23Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        clear: bool
        patch: bool
        ensure: bool
        patchAfter: bool
        pass

    clear: Final[bool] = ...

    patch: Final[MyStructField23Patch] = ...

    ensure: Final[_typing.Optional[_typing.Mapping[str, str]]] = ...

    patchAfter: Final[MyStructField23Patch] = ...

    def __init__(
        self, *,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[MyStructField23Patch]=None,
        ensure: _typing.Optional[_typing.Mapping[str, str]]=None,
        patchAfter: _typing.Optional[MyStructField23Patch]=None
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        patch: _typing.Union[MyStructField23Patch, '__NotSet', None]=NOTSET,
        ensure: _typing.Union[_typing.Mapping[str, str], '__NotSet', None]=NOTSET,
        patchAfter: _typing.Union[MyStructField23Patch, '__NotSet', None]=NOTSET
    ) -> OptionalMyStructField23Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['OptionalMyStructField23Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'OptionalMyStructField23Patch') -> bool: ...
    def __gt__(self, other: 'OptionalMyStructField23Patch') -> bool: ...
    def __le__(self, other: 'OptionalMyStructField23Patch') -> bool: ...
    def __ge__(self, other: 'OptionalMyStructField23Patch') -> bool: ...


class MyStructValuePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        clear: bool
        patch: bool
        pass

    assign: Final[_typing.Optional[MyStruct]] = ...

    clear: Final[bool] = ...

    patch: Final[MyStructPatch] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[MyStruct]=None,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[MyStructPatch]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[MyStruct, '__NotSet', None]=NOTSET,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        patch: _typing.Union[MyStructPatch, '__NotSet', None]=NOTSET
    ) -> MyStructValuePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStructValuePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStructValuePatch') -> bool: ...
    def __gt__(self, other: 'MyStructValuePatch') -> bool: ...
    def __le__(self, other: 'MyStructValuePatch') -> bool: ...
    def __ge__(self, other: 'MyStructValuePatch') -> bool: ...


class OptionalMyStructValuePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        clear: bool
        patch: bool
        ensure: bool
        patchAfter: bool
        pass

    clear: Final[bool] = ...

    patch: Final[MyStructValuePatch] = ...

    ensure: Final[_typing.Optional[MyStruct]] = ...

    patchAfter: Final[MyStructValuePatch] = ...

    def __init__(
        self, *,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[MyStructValuePatch]=None,
        ensure: _typing.Optional[MyStruct]=None,
        patchAfter: _typing.Optional[MyStructValuePatch]=None
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Union[bool, '__NotSet', None]=NOTSET,
        patch: _typing.Union[MyStructValuePatch, '__NotSet', None]=NOTSET,
        ensure: _typing.Union[MyStruct, '__NotSet', None]=NOTSET,
        patchAfter: _typing.Union[MyStructValuePatch, '__NotSet', None]=NOTSET
    ) -> OptionalMyStructValuePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['OptionalMyStructValuePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'OptionalMyStructValuePatch') -> bool: ...
    def __gt__(self, other: 'OptionalMyStructValuePatch') -> bool: ...
    def __le__(self, other: 'OptionalMyStructValuePatch') -> bool: ...
    def __ge__(self, other: 'OptionalMyStructValuePatch') -> bool: ...


_List__i16T = _typing.TypeVar('_List__i16T', bound=_typing.Sequence[int])


class List__i16(_typing.Sequence[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[int]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> int: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[int]: ...
    def __add__(self, other: _typing.Sequence[int]) -> 'List__i16': ...
    def __radd__(self, other: _List__i16T) -> _List__i16T: ...
    def __reversed__(self) -> _typing.Iterator[int]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Set__string(_typing.AbstractSet[str], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[str]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[str]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def intersection(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def difference(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def symmetric_difference(self, other: _typing.AbstractSet[str]) -> 'Set__string': ...
    def issubset(self, other: _typing.AbstractSet[str]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[str]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


class Map__string_string(_typing.Mapping[str, str], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[str, str]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[str, str]: ...
    def __getitem__(self, key: str) -> str: ...
    def __iter__(self) -> _typing.Iterator[str]: ...


