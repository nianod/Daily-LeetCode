
 
# 91. Decode Ways

You have intercepted a secret message encoded as a string of numbers. The message
is decoded using the following mapping:

| Number | Letter |
| ------ | ------ |
| `1` | `A` |
| `2` | `B` |
| ... | ... |
| `25` | `Y` |
| `26` | `Z` |

There may be multiple ways to decode a message because some codes are contained
within other codes. For example, `2` and `5` can be decoded separately, or
combined as `25`.

For example, `11106` can be decoded as:

- `AAJF`, using the grouping `(1, 1, 10, 6)`
- `KJF`, using the grouping `(11, 10, 6)`

The grouping `(1, 11, 06)` is invalid because `06` is not a valid code; only `6`
is valid.

Some strings may be impossible to decode.

## Task

Given a string `s` containing only digits, return the number of ways to decode
it. If the entire string cannot be decoded, return `0`.