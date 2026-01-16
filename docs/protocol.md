# Arduino ↔ ESP8266 Serial Protocol

## Format
Line-based messages (newline terminated):

`ALARM,<temperature>,<humidity>`

Example:
`ALARM,24,50`

## When sent
- Only in ALARM state
- Rate-limited to avoid spam (e.g., every 15 seconds)

## Parsing rules
- ESP8266 ignores lines that do not start with `ALARM`
- Temperature and humidity are optional but recommended
