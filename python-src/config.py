import settings

allow_custom_commands = True
retry_count = settings.get("retry_count", 90) # amount of seconds that the NIC will wait for a connection before gibing up
repl_password = settings.get("repl password", "passwrd1")
