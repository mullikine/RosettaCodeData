-- module MyRe where

import Text.Regex

str = "I am a string"

main :: IO ()
main = do
case matchRegex (mkRegex ".*string$") str of
  Just _  -> putStrLn $ "ends with 'string'"
  Nothing -> return ()