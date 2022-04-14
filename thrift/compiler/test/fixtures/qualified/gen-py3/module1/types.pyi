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


__property__ = property


class Enum(thrift.py3.types.Enum):
    ONE: Enum = ...
    TWO: Enum = ...
    THREE: Enum = ...


class Struct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        first: bool
        second: bool
        pass

    first: Final[int] = ...

    second: Final[str] = ...

    def __init__(
        self, *,
        first: _typing.Optional[int]=None,
        second: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        first: _typing.Union[int, '__NotSet', None]=NOTSET,
        second: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> Struct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Struct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Struct') -> bool: ...
    def __gt__(self, other: 'Struct') -> bool: ...
    def __le__(self, other: 'Struct') -> bool: ...
    def __ge__(self, other: 'Struct') -> bool: ...


_List__EnumT = _typing.TypeVar('_List__EnumT', bound=_typing.Sequence[Enum])


class List__Enum(_typing.Sequence[Enum], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[Enum]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[Enum]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> Enum: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[Enum]: ...
    def __add__(self, other: _typing.Sequence[Enum]) -> 'List__Enum': ...
    def __radd__(self, other: _List__EnumT) -> _List__EnumT: ...
    def __reversed__(self) -> _typing.Iterator[Enum]: ...
    def __iter__(self) -> _typing.Iterator[Enum]: ...


c1: Struct = ...
e1s: List__Enum = ...
